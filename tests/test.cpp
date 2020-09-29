#include <gtest/gtest.h>
#include <iostream>
#include <vector>

#include "clazz.hpp"

TEST(l, test_data) {
  std::vector<int> vec{1, 2, 3};
  clazz c(std::move(vec));
  c.add(1);

  EXPECT_EQ(c.get()[0], 2);
}
