#ifndef INCLUDE_CLAZZ_HPP_
#define INCLUDE_CLAZZ_HPP_

#include <iostream>
#include <utility>
#include <vector>

class clazz {
 public:
  explicit clazz(const std::vector<int>&& vec) : vec_(std::move(vec)) {}

  void add(int k);

  const std::vector<int> get() { return vec_; }

  friend std::ostream& operator<<(std::ostream& os, clazz& cl) {
    for (int i = 0; i < (int) cl.vec_.size(); ++i) {
      os << cl.vec_[i];
      if (i < (int) cl.vec_.size() - 1)
        os << ", ";
    }
    return os;
  }

 private:
  std::vector<int> vec_;
};

#endif // INCLUDE_CLAZZ_HPP_
