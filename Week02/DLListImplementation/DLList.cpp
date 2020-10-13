#include "DLList.h"

void DLList::copy(const DLList& rhs)
{
	this->first = new Node(rhs.first->data);

	Node* copy = rhs.first;
	Node* cur = this->first;

	while (copy->next != nullptr)
	{
		cur->next = new Node(copy->next->data);
		cur->next->prev = cur;
		cur = cur->next;
		copy = copy->next;
	}

	this->last = cur;
}

void DLList::clear()
{
	Node* temp = nullptr;
	while (first != nullptr)
	{
		temp = new Node(first->data);

		first = first->next;
		delete temp;
	}
	//this->first = nullptr; - не е необходимо, защото в while цикъла сме направили first nullptr
	this->last = nullptr;
}

void DLList::clearReverse()
{
	Node* temp = nullptr;

	while (last != nullptr)
	{
		temp = new Node(last->data);
		last = last->prev;

		delete temp;
	}

	this->first = nullptr;
}

DLList::DLList()
{
	this->first = nullptr;
	this->last = nullptr;
}

DLList::DLList(const DLList& rhs)
{
	this->copy(rhs);
}

const DLList& DLList::operator=(const DLList& rhs)
{
	if (this != &rhs)
	{
		this->clear();
		this->copy(rhs);
	}

	return *this;
}

DLList::~DLList()
{
	this->clear();
}

void DLList::insertFront(const int& data)
{
	if (this->first == nullptr)
	{
		this->first = new Node(data);
	}
	else
	{
		Node* temp = new Node(data, nullptr, this->first);
		this->first->prev = temp;
		this->first = temp;
	}
}

void DLList::insertLast(const int& data)
{
	//ако имаме само указател към първия елемент на списъка (first)
	/*if (this->first == nullptr)
	{
		this->first = new Node(data);
	}
	else
	{
		Node* cur = this->first;
		while (cur->next != nullptr)
		{
			cur = cur->next;
		}
		Node* newNode = new Node(data, cur);
		cur->next = newNode;
	}*/

	//ако имаме first и last
	Node* newNode = new Node(data, last);
	last->next = newNode;
	last = newNode;
}

void DLList::insertBefore(int beforeData, int data)
{
	Node* cur = this->first;
	while (cur != nullptr && cur->data != beforeData)
	{
		cur = cur->next;
	}

	if (cur->prev == nullptr)
	{
		Node* newNode = new Node(data, cur);
		cur->prev = newNode;
		this->first = newNode;
	}
	else
	{
		Node* newNode = new Node(data, cur->prev, cur);
		cur->prev->next = newNode;
		cur->prev = newNode;
	}
}

void DLList::reverse()
{
	Node* cur = first;
	Node* copy = nullptr;

	while (cur != nullptr)
	{
		copy = cur->prev;
		cur->prev = cur->next;
		cur->next = copy;
		cur = cur->prev;
	}

	if (copy != nullptr)
	{
		first = copy->prev;
	}
}
