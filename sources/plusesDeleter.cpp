// Copyright 2023 by Dmitry Bereznev

#include "lab.h"

std::vector<int> plusesDeleter(std::vector<int>& arr) {
  auto it = arr.begin();
  while (it != arr.end()) {
    if (*it > 0) {
      it = arr.erase(it);
    } else {
      ++it;
    }
  }
  arr.shrink_to_fit();
  return arr;
}
