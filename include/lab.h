// Copyright 2023 by Dmitry Bereznev

#ifndef INCLUDE_LAB_HPP_
#define INCLUDE_LAB_HPP_

#include <vector>
#include <list>
#include <map>
#include <string>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <set>

std::vector<int>::iterator Find(std::vector<int>::iterator,
                                std::vector<int>::iterator, int);
std::vector<int>::iterator findInSorted(std::vector<int>::iterator,
                                        std::vector<int>::iterator,
                                        int);
int wordsCounter(const std::string&);
std::map<std::string, int> wordsMapCounter(const std::string&);
std::vector<std::string> uniqueWords(const std::string&);
int diffWordsCounter(const std::string&);
void reverseNum(std::list<int>&);
std::vector<int> plusesDeleter(std::vector<int>& arr);
void Sort(std::list<int>&);

#endif //INCLUDE_LAB_HPP_