#pragma once

//имплементация на едносвързан списък

class SLinkList
{
private:
	struct Node
	{
		int data;
		Node* next;

		Node(const int& data, Node* next = nullptr)
		{
			this->data = data;
			this->next = next;
		}
	};

	Node* first;
	//size_t size; - когато ни интересува броя на възлите в списъка

	void copy(const SLinkList&);

	void clear();

public:
	SLinkList();

	SLinkList(const SLinkList&);

	SLinkList& operator=(const SLinkList&);

	~SLinkList();
};
