#include "list.h"


template<typename T>
int LinkedList<T>::total_elements()
{
	return length;
}

template<typename T>
void LinkedList<T>::reverse()
{
	Node<T>* curr = head;
	Node<T>* pre = nullptr;
	Node<T>* next= nullptr;

	while (curr!=nullptr) {
		next=curr->next;
		curr->next=pre;
		pre=curr;
		curr=next;
	}
	head=pre;
}

template<typename T>
void LinkedList<T>::add(T value)
{
	Node<T>* temp=new Node<T>;
	temp->data=value;
	temp->next=nullptr;

	if(head==nullptr)
	{
		head=temp;
		tail=temp;
		temp=nullptr;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
	length++;
}

template<typename T>
void LinkedList<T>::delete_value(T value)
{
	if (length == 0)
		return;

	Node<T>* prev = head;
	Node<T>* temp = head->next;
	while (temp != nullptr)
	{
		if (temp->data == value)
			break;
		prev = temp;
		temp = temp->next;
	}

	if (temp == nullptr) 
    return;
	if (temp->next == nullptr)
	{
		prev->next = nullptr;
	}
	else
	{
		prev->next = temp->next;
	}
	length--;
}

template<typename T>
void LinkedList<T>::delete_at(int index)
{
	if (length == 0)
		return;

	if (index > length || index < 0)
		return;
	if (index == 0)
	{
		Node<T>* temp = head;
		head = head->next;
		delete temp;
		length--;
	}

	Node<T>* prev = head;
	Node<T>* it = head;
	for (int i = 0; i <= index; i++)
	{
		prev = it;
		it = it->next;
	}
	prev->next = it->next;
	delete it;
	it = prev->next;
	length--;
}

template<typename T>
void LinkedList<T>::print()
{
	Node<T>* temp = head;
	while (temp != nullptr)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}

template<typename T>
void LinkedList<T>::delete_last()
{
	if (length == 0)
		return;
	
	Node<T> *curr = new Node<T>;
	Node<T>* pre = new Node<T>;
	curr=head;
	while(curr->next!=nullptr)
	{
		pre=curr;
		curr=curr->next;
	}
	tail=pre;
	pre->next=nullptr;
	delete curr;
	length--;
}