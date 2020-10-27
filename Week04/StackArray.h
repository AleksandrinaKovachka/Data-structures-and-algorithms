#pragma once

template <typename T>
class Stack
{
private:
	T* stackArray;
	unsigned size;
	unsigned capacity;

	void copy(const Stack<T>& rhs);
	void erase();
	void resize();

public:
	Stack();
	Stack(const Stack<T>& rhs);
	Stack<T>& operator=(const Stack<T>& rhs);
	~Stack();

	void push(const T& data); //добавя нов елемент отгоре
	T& top() const; //връща най-горния елемент без да го премахва
	void pop(); //премахва най-горния

	unsigned getSize() const;
	bool isEmpty() const;
};

template <typename T>
void Stack<T>::copy(const Stack<T>& rhs)
{
	size = rhs.size;
	capacity = rhs.capacity;
	stackArray = new T[capacity];
	for (unsigned i = 0; i < size; ++i)
	{
		stackArray[i] = rhs.stackArray[i];
	}
}

template <typename T>
void Stack<T>::erase()
{
	delete[] stackArray;
}

template <typename T>
void Stack<T>::resize()
{
	capacity *= 2;
	T* newArray = new T[capacity];
	for (unsigned i = 0; i < size; ++i)
	{
		newArray[i] = stackArray[i];
	}
	erase();
	stackArray = newArray;
}

template <typename T>
Stack<T>::Stack()
{
	size = 0;
	capacity = 8;
	stackArray = new T[capacity];
}

template <typename T>
Stack<T>::Stack(const Stack<T>& rhs)
{
	copy(rhs);
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& rhs)
{
	if (this != &rhs)
	{
		erase();
		copy(rhs);
	}
}

template <typename T>
Stack<T>::~Stack()
{
	erase();
}

template <typename T>
void Stack<T>::push(const T& data)
{
	if (size >= capacity)
	{
		resize();
	}
	stackArray[size++] = data;
}

template <typename T>
T& Stack<T>::top() const
{
	return stackArray[size - 1];
}

template <typename T>
void Stack<T>::pop()
{
	--size;
}

template <typename T>
unsigned Stack<T>::getSize() const
{
	return size;
}

template <typename T>
bool Stack<T>::isEmpty() const
{
	return size == 0;
}
