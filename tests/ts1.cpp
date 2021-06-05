#include <gtest/gtest.h>
#include "../src/list.h"
#include "../src/list.cpp"

TEST(TS1, normalize) {
    LinkedList<int> a;
	a.add(3);
	a.add(4);
    EXPECT_EQ(2,a.total_elements());
}
