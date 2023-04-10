// Copyright 2023 by Dmitry Bereznev

#include "lab.h"

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first,
                                        std::vector<int>::iterator last,
                                        int el) {
  std::vector<int>::iterator mid;
  auto end = last;
  while (first <= last) {
    mid = first + (last - first) / 2;
    if (*mid > el) {
      last = mid - 1;
    } else if (*mid < el) {
      first = mid + 1;
    } else if (*mid == el) {
      return mid;
    }
  }
  return end;
}
