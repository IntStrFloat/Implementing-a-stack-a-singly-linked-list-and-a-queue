// Copyright 2023 by Dmitry Bereznev

#include "lab.h"

std::map<std::string, int> wordsMapCounter(const std::string& str) {
  std::map<std::string, int> words;
  std::string word;
  for (size_t i = 0; i < str.length(); ++i) {
    if (str[i] == ' ' || str[i] == '.' || str[i] == ',') {
      if (word.length() > 0 && i != str.length() - 1) {
        words[word] += 1;
        word = "";
      }
    } else {
      word += std::tolower(str[i], std::locale());
    }
  }
  if (!word.empty()) {
    words[word] += 1;
  }
  return words;
}
