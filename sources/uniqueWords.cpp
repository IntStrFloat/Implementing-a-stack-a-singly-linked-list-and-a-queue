// Copyright 2023 by Dmitry Bereznev

#include "lab.h"

std::vector<std::string> uniqueWords(const std::string& str) {
  std::vector<std::string> words;
  std::string word;
  std::set<std::string> myset;
  for (size_t i = 0; i < str.length(); ++i) {
    if (str[i] == ' ' || str[i] == '.' || str[i] == ',') {
      if (word.length() > 0 && i != str.length() - 1) {
        if (!std::count(myset.begin(),
                        myset.end(),
                        word)) { // иф рабоатет, если нет слова "!"
          myset.insert(word);
        }
        word = "";
      }
    } else {
      word += str[i];
    }
  }
  if (!word.empty()) {
    if (!std::count(myset.begin(), myset.end(), word)) {
      myset.insert(word);
    }
  }
  for (const auto& i : myset) {
    words.push_back(i);
  }
  return words;
}
