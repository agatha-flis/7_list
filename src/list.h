#ifndef LIST_H
#define LIST_H 

#include <iostream>

template <typename T>
class Node
{
public:
	T data;
	Node* next;

public:
	Node() { next = nullptr; }
	Node(T value)
	{
		data = value;
		next = nullptr;
	}
	~Node() {}
};


template <typename T>
class LinkedList
{
private:
	Node<T>* head;
	Node<T>* tail;
	int length = 0;
public:
	LinkedList() {
		head = nullptr;
		tail = nullptr;
		length = 0;
	}
	~LinkedList() {}
	int total_elements();
	void add(T value);
	void delete_value(T value);
	void delete_at(int idx);
	void delete_last();
	void print();
	void reverse();
};


#endif
