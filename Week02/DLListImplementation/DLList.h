#pragma once

//имплементация на двусвързан списък

class DLList
{
private:
	struct Node
	{
		int data;
		Node* next;
		Node* prev;

		Node(const int& data, Node* prev = nullptr, Node* next = nullptr)
		{
			this->data = data;
			this->prev = prev;
			this->next = next;
		}
	};

	Node *first, *last; //указатели към първия и последния елемент на списъка

	void copy(const DLList& rhs);

	void clear();

	void clearReverse(); //изтриване отзад напред (чрез last)

public:

	DLList();

	DLList(const DLList& rhs);

	const DLList& operator=(const DLList& rhs);

	~DLList();

	void insertFront(const int& data); //вмъкване на елемент в началото

	void insertLast(const int& data); //вмъкване на елемент в края

	void insertBefore(int beforeData, int data); //вмъкване на елемент преди друг елемент от списъка

	void reverse(); //обръщане на списъка

	/*class Iterator
	{
	private:
		Node* cur;
		DLList*  list; //first

	public:
		Iterator(Node* cur, DLList* list)
		{
			this->cur = cur;
			this->list = list;
		}

		Iterator& operator++()
		{
			if (this->cur == nullptr)
			{
				return;
			}
			this->cur = this->cur->next;

			return *this;
		}

		Iterator& operator--()
		{
			if (this->cur == nullptr)
			{
				if (this->list == nullptr)
				{
					return;
				}
				else
				{
					cur = list->last;
				}
			}
			else
			{
				cur = cur->prev;
			}

			return *this;
		}

		int& operator*()
		{
			return cur->data;
		}

		bool operator!=(const Iterator& rhs)
		{
			return cur != rhs.cur;
		}
	};

	Iterator begin()
	{
		return DLList::Iterator(first, this);
	}

	Iterator end()
	{
		return DLList::Iterator(nullptr, this); // return DLList::Iterator(last, this);
	}*/
};
