// Copyright 2023 by Dmitry Bereznev

#include "lab.h"

std::vector<int>::iterator Find(std::vector<int>::iterator first,
                                std::vector<int>::iterator last, int el) {
  for (auto it = first; it < last; ++it) {
    if (el == *it) {
      return it;
    }
  }
  return last;
}
