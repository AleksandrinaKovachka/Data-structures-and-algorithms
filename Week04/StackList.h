#pragma once

template <class T>
class Stack
{
private:
	struct Node
	{
		T value;
		Node *next;

		Node() : next(nullptr) {}

		Node(const T& val, Node *n = nullptr)
		{
			value = val;
			next = n;
		}
	};

	Node *head;
	size_t size;

	void copy(const Stack<T>& rhs);
	void erase();

public:
	Stack();
	Stack(const Stack<T>& rhs);
	Stack<T>& operator=(const Stack<T>& rhs);
	~Stack();

	// Accessors
	size_t sizeOfStack() const;
	bool empty() const;
	T& top() const;

	// Modifiers
	void push(const T& value);
	void pop();

};

template <class T>
void Stack<T>::copy(const Stack<T>& rhs)
{
	this->size = rhs.size;
	this->head = new Node(rhs.head->value);
	Node* original = rhs.head;
	Node* copyNode = this->head;
	while (original->next)
	{
		copyNode->next = new Node(original->next->value);
		copyNode = copyNode->next;
		original = original->next;
	}
}

template <class T>
void Stack<T>::erase()
{
	while (this->head)
	{
		Node *copy = this->head;
		this->head = this->head->next;
		delete copy;
	}
	this->size = 0;
	//this->head = nullptr;
}

template <class T>
Stack<T>::Stack()
{
	this->size = 0;
	this->head = nullptr;
}

template <class T>
Stack<T>::Stack(const Stack<T>& rhs)
{
	this->copy(rhs);
}

template <class T>
Stack<T>& Stack<T>::operator=(const Stack<T>& rhs)
{
	if (this != &rhs)
	{
		this->erase();
		this->copy(rhs);
	}

	return *this;
}

template <class T>
Stack<T>::~Stack()
{
	this->erase();
}

template <class T>
size_t Stack<T>::sizeOfStack() const
{
	return this->size;
}

template <class T>
bool Stack<T>::empty() const
{
	return this->size == 0;
}

template <class T>
T& Stack<T>::top() const
{
	if (this->size != 0)
	{
		return this->head->value;
	}
}

template <class T>
void Stack<T>::push(const T& value)
{
	if (this->head)
	{
		Node *copy = new Node(value);
		copy->next = this->head;
		this->head = copy;
		++this->size;
	}
	else
	{
		this->head = new Node(value);
		++this->size;
	}
}

template <class T>
void Stack<T>::pop()
{
	if (this->size != 0)
	{
		Node* copy = new Node(this->head->value);
		this->head = this->head->next;
		--this->size;
		delete copy;
	}
}
