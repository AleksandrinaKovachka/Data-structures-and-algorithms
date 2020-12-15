#pragma once

template <typename T>
class Queue
{
private:
	T* queueArray;
	unsigned size;
	unsigned capacity;

	void copy(const Queue<T>& rhs);
	void erase();
	void resize();

public:
	Queue();
	Queue(const Queue<T>& rhs);
	Queue<T>& operator=(const Queue<T>& rhs);
	~Queue();

	void pushBack(const T& data);
	T& front() const;
	void popFront();

	unsigned getSize() const;
	bool isEmpty() const;
};

template <typename T>
void Queue<T>::copy(const Queue<T>& rhs)
{
	size = rhs.size;
	capacity = rhs.capacity;
	queueArray = new T[capacity];
	for (unsigned i = 0; i < size; ++i)
	{
		queueArray[i] = rhs.queueArray[i];
	}
}

template <typename T>
void Queue<T>::erase()
{
	delete[] queueArray;
}

template <typename T>
void Queue<T>::resize()
{
	capacity *= 2;
	T* newArray = new T[capacity];
	for (unsigned i = 0; i < size; ++i)
	{
		newArray[i] = queueArray[i];
	}
	erase();
	queueArray = newArray;
}

template <typename T>
Queue<T>::Queue()
{
	size = 0;
	capacity = 8;
	queueArray = new T[capacity];
}

template <typename T>
Queue<T>::Queue(const Queue<T>& rhs)
{
	copy(rhs);
}

template <typename T>
Queue<T>& Queue<T>::operator=(const Queue<T>& rhs)
{
	if (this != &rhs)
	{
		erase();
		copy(rhs);
	}
}

template <typename T>
Queue<T>::~Queue()
{
	erase();
}

template <typename T>
void Queue<T>::pushBack(const T& data)
{
	if (size >= capacity)
	{
		resize();
	}
	queueArray[size++] = data;
}

template <typename T>
T& Queue<T>::front() const
{
	return queueArray[0];
}

template <typename T>
void Queue<T>::popFront() //O(n)
{
	for (unsigned i = 0; i < size - 1; ++i)
	{
		queueArray[i] = queueArray[i + 1];
	}
	size--;
}

template <typename T>
unsigned Queue<T>::getSize() const
{
	return size;
}

template <typename T>
bool Queue<T>::isEmpty() const
{
	return size == 0;
}
