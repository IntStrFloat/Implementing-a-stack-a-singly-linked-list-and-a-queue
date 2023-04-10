// Copyright 2023 by Dmitry Bereznev

#include "lab.h"

void reverseNum(std::list<int>& arr) {
  for (auto it = arr.begin();
       it != arr.end(); ++it) {
    if (*it != 0) {
      arr.insert(it, *it * -1);
    }
  }
}
