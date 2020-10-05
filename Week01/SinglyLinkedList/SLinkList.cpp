#include "SLinkList.h"

void SLinkList::copy(const SLinkList& rhs)
{
	//Node* newBox = new Node(rhs.first->data);
	//this->first = newBox;
	this->first = new Node(rhs.first->data);

	Node* copy = rhs.first; //указател, който ще итерира по списъка rhs
	Node* cur = this->first; //указател, който ще итерира по текущия списък (this)

	//Node* tempBox = nullptr;
	while (copy->next != nullptr)
	{
		//tempBox = new Node(copy->next->data);
		//cur->next = tempBox;
		cur->next = new Node(copy->next->data);
		copy = copy->next;
		cur = cur->next;
	}

}

void SLinkList::clear()
{
	Node* temp = nullptr;
	while (first != nullptr)
	{
		temp = new Node(first->data);
		first = first->next;
		delete temp;
	}
}

SLinkList::SLinkList()
{
	this->first = nullptr;
}

SLinkList::SLinkList(const SLinkList& rhs)
{
	this->copy(rhs);
}

SLinkList& SLinkList::operator=(const SLinkList& rhs)
{
	if (this != &rhs)
	{
		this->clear();
		this->copy(rhs);
	}

	return *this;
}

SLinkList::~SLinkList()
{
	this->clear();
}
