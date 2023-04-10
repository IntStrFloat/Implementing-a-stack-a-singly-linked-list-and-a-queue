// Copyright 2023 by Dmitry Bereznev

#include "lab.h"

int wordsCounter(const std::string& str) {
  std::string word;
  int counter = 0;
  for (size_t i = 0; i < str.length(); ++i) {
    if (str[i] == ' ' || str[i] == '.' || str[i] == ',') {
      if (word.length() > 0 && i != str.length() - 1) {
        ++counter;
        word = "";
      }
    } else {
      word += str[i];
    }
  }
  if (!word.empty()) {
    ++counter;
  }
  return counter;
}
