#pragma once

template <class T>
class QueueList
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

	Node *front, *back;
	size_t size;

	void copy(const QueueList<T>& rhs);
	void erase();

public:
	QueueList();
	QueueList(const QueueList<T>& rhs);
	QueueList<T>& operator=(const QueueList<T>& rhs);
	~QueueList();

	// Accessors
	size_t sizeOfQueue() const;
	bool empty() const;
	T& front() const;

	// Modifiers
	void pushBack(const T& value);
	void popFront();

};

template <class T>
void QueueList<T>::copy(const QueueList<T>& rhs)
{
	this->size = rhs.size;
	this->front = new Node(rhs.front->value);
	Node* original = rhs.front;
	Node* copyNode = this->front;
	while (original->next->next)
	{
		copyNode->next = new Node(original->next->value);
		copyNode = copyNode->next;
		original = original->next;
	}
	this->back = new Node(rhs.back->value);
}

template <class T>
void QueueList<T>::erase()
{
	while (this->front)
	{
		Node *copy = this->front;
		this->front = this->front->next;
		delete copy;
	}
	this->back = nullptr;
	this->size = 0;
}

template <class T>
QueueList<T>::QueueList()
{
	this->size = 0;
	this->front = nullptr;
	this->back = nullptr;
}

template <class T>
QueueList<T>::QueueList(const QueueList<T>& rhs)
{
	this->copy(rhs);
}

template <class T>
QueueList<T>& QueueList<T>::operator=(const QueueList<T>& rhs)
{
	if (this != &rhs)
	{
		this->erase();
		this->copy(rhs);
	}

	return *this;
}

template <class T>
QueueList<T>::~QueueList()
{
	this->erase();
}

template <class T>
size_t QueueList<T>::sizeOfQueue() const
{
	return this->size;
}

template <class T>
bool QueueList<T>::empty() const
{
	return this->size == 0;
}

template <class T>
T& QueueList<T>::front() const
{
	if (this->size != 0)
	{
		return this->front->value;
	}
}

template <class T>
void QueueList<T>::pushBack(const T& value)
{
	if (this->back)
	{
		this->back->next = new Node(value);
		this->back = this->back->next;
		++this->size;
	}
	else
	{
		this->front = new Node(value);
		this->back = this->front;
		++this->size;
	}
}

template <class T>
void QueueList<T>::popFront()
{
	if (this->size != 0)
	{
		Node *copy = this->front;
		this->front = this->front->next;
		if (this->front == nullptr)
		{
			this->back = nullptr;
		}
		--this->size;
		delete copy;
	}
}
