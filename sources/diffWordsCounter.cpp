// Copyright 2023 by Dmitry Bereznev

#include "lab.h"

std::vector<std::string> uniqueWords(const std::string&);

int diffWordsCounter(const std::string& str) {
  return uniqueWords(str).size();
}
