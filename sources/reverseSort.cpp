// Copyright 2023 by Dmitry Bereznev

#include "lab.h"

void Sort(std::list<int>& input) {
  for (auto i = input.begin(); i != input.end(); ++i) {
    for (auto j = input.begin(); j != i; ++j) {
      if (*i > *j) {
        std::iter_swap(i, j);
      }
    }
  }
}
