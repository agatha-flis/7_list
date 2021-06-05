#include "list.h"


template<typename T>
int LinkedList<T>::total_elements()
{
	return length;
}

template<typename T>
void LinkedList<T>::add(T value)
{
	Node<T>* temp = head;
	while (temp->next != nullptr)
		temp = temp->next;
	temp->next = new Node<T>(value);

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
	Node<T>* temp = head->next;
	while (temp != nullptr)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}
