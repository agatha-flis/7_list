#include "list.h"
#include "list.cpp"

#include <iostream>
using namespace std;

int main()
{
	LinkedList<int> a;
	a.add(3);
	a.add(4);
	a.add(5);
	a.add(6);
	a.print();
	std::cout << a.total_elements() << std::endl;

	LinkedList<char> b;
	b.add('a');
	b.add('b');
	b.add('c');
	b.add('d');
	b.add('e');
	b.print();
	a.delete_at(2);
	a.print();
	std::cout<< b.total_elements() << std::endl;

	return 0;
}