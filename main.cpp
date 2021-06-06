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
	a.reverse();
	a.print();

	return 0;
}