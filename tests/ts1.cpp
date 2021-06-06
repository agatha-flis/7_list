#include <gtest/gtest.h>
#include "../src/list.h"
#include "../src/list.cpp"

TEST(TS1, add_int) {
    LinkedList<int> a;
	a.add(3);
	a.add(4);
    EXPECT_EQ(2,a.total_elements());
}

TEST(TS2, delete_last) {
    LinkedList<int> b;
	b.add(3);
    b.add(4);
	b.delete_last();
    EXPECT_EQ(1,b.total_elements());
}

TEST(TS3, add_char) {
    LinkedList<char> c;
	c.add('a');
    c.add('a');
	c.add('b');
    EXPECT_EQ(3,c.total_elements());
}

TEST(TS2, delete_at) {
    LinkedList<double> d;
	d.add(2.0);
    d.add(3.8);
	d.add(16.4);
    d.add(1.1);
	d.delete_value(16.4);
    EXPECT_EQ(3,d.total_elements());
}

