
# Лабораторная работа 6

## Теоретическая справка

### Что такое STL контейнеры?
* Контейнеры - это шаблоны классов, предоставляемых библиотекой STL, разработанных для хранения коллекций связанных объектов;
* Контейнеры, которые вы будете использовать в данной лабораторной работе: vector, list, map;
* Более подробная информация- [тут.](https://msdn.microsoft.com/ru-ru/library/1fe2x6kt.aspx)

## Подробнее о каждом из контейнеров

### std::list
* Класс списка STL — это класс шаблона контейнеров последовательностей, содержащих элементы в линейном порядке и позволяющие вставлять и удалять элементы в любом месте в пределах этих последовательностей. Последовательность сохраняется в виде двунаправленного связанного списка элементов, каждый из которых содержит член какого-либо типа типа.
* Сложность вставки элемента - O(1). Если время работы алгоритма вообще не зависит от размера входных данных, то сложность обозначают как O(1);
* Сложность удаления элемента -  О(1) при сохранении порядка.

### std::map
* Используется для хранения и извлечения данных из коллекции, в которой каждый элемент является парой,
 обладающей одновременно значением данных и ключом сортировки. Значение ключа уникально и применяется для автоматической сортировки данных;
* `std::map` — отсортированный ассоциативный контейнер, который содержит пары ключ-значение с неповторяющимися ключами;
* Операции поиска, удаления и вставки имеют логарифмическую сложность;
* О том, что такое [логарифмическая сложность](https://medium.com/@va00iosd/%D0%BE%D1%86%D0%B5%D0%BD%D0%BA%D0%B0-%D1%81%D0%BB%D0%BE%D0%B6%D0%BD%D0%BE%D1%81%D1%82%D0%B8-%D0%B0%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC%D0%BE%D0%B2-%D0%B8%D0%BB%D0%B8-%D1%87%D1%82%D0%BE-%D1%82%D0%B0%D0%BA%D0%BE%D0%B5-%D0%BE-log-n-be9752eae062).

### std::set 
* `std::set` — это контейнер, который автоматически сортирует добавляемые элементы в порядке возрастания. Но при добавлении одинаковых значений, set будет хранить только один его экземпляр. По другому его еще называют множеством;
* Операции поиска, удаления и вставки имеют логарифмическую сложность.

### Что такое итераторы?
* Итератор — это такая структура данных, которая используется для обращения к определенному элементу в контейнерах STL.
Обычно из используют с контейнерами set, list , а у вектора для этого применяют индексы;
* Подробнее об итераторах - [тут](https://metanit.com/cpp/tutorial/7.3.php).

* [Еще больше примеров практического применения.](https://github.com/bmstu-iu8-cpp/cpp-beginner-2017/tree/master/lab6)

### Инструкция
Каждое задание должно быть выполненно в отдельном `.cpp` файле. Прототипы функции должны быть вынесены в `lab.hpp` файлы.
Все реализованные функции необходимо вызвать в фунции `main` в файле `lab06` Все `.cpp` файлы добавить в `CMakeLists.txt`.

### Задание
1. Реализуйте функцию поиска элемента в диапазоне от `first` до `last`. Требуется вернуть итератор указывающий на найденный элемент. Если элемента нет, верните итератор `last`.

Прототип функции:
```cpp
std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);
```
Пример использования функции:
```cpp
std::vector<int> v = {6, 8, 1, 2, 3, 4, 5};
std::vector<int>::iterator it = Find(v.begin(), v.end(), 2);
```
2. Реализуйте функцию поиска элемента в диапозоне от `first` до `last`. **Известно**, что значения в диапазоне отсортированы. Требуется вернуть итератор указывающий на найденный элемент.
Если элемента нет, верните итератор `last`.

Прототип функции:
```cpp
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);
```
Пример использования функции:
```cpp
std::vector<int> v = {1, 2, 3, 4, 5};
std::vector<int>::iterator it = findInSorted(v.begin(), v.end(), 2);
```
3. Реализуйте функцию, которая считает количество слов в предложении. Слова могут разделяться `' '`, `','`, и `'.'`.
Одинаковые слова, начинающиеся с заглавной и строчной буквы, считать различными.
Прототип функции:
```cpp
int wordsCounter(const std::string& str);
```
Пример использования функции:
```cpp
int words = wordsCounter("can you can");
```
4. Реализуйте функцию, которая подсчитает количество вхождения различных слов в предложении. Слова могут разделяться `' '`, `','`, и `'.'`.
Функция должна возвращать `std::map<std::string, int>`

Пример использования функции:
```cpp
std::map<std::string, int> words = wordsMapCounter("can you can");
// words["can"] == 2
// words["you"] == 1
```
5. Реализуйте функцию, которая вернет уникальные слова в предложении. Слова могут разделяться `' '`, `','`, и `'.'`.

Прототип функции:
```cpp
std::vector<std::string> uniqueWords(const std::string& str);
```
Пример использования функции:
```cpp
std::vector<std::string> unique = uniqueWords("Can you can");
// unique  == {"can", "you"};
```
6. Реализуйте функцию, которая подсчитает количество различных слов в предложении. Слова могут разделяться `' '`, `','`, и `'.'`.

Пример использования функции:
```cpp
int words = diffWordsCounter("can you can a can");
```
7. Дан `std::list` целочисленных чисел.  Реализуйте функцию, которая вставит перед каждым числов его обратный элемент.

Пример использования функции:
```cpp
std::list<int> nums = {1, 5, 4, -3};
reverseNum(nums);
// nums == {-1, 1, -5, 5, -4, 4, 3, -3};
```
8. Дан вектор действительных чисел. Реализуйте функцию, которая удалит все положительные числа.

Пример использования функции:
```cpp
std::vector<int> v = {1, 0, -8, -9, 0, 10, 23, -7};
plusesDeleter(v);
// v == {0, -8, -9, 0, -7};
```
9. Дан `std::list` действительных чисел. Реализуйте функцию сортировки по убыванию.

Пример использования функции:
```cpp
std::list<int> nums = {1, 5, 4, -3};
Sort(nums);
// nums == {5, 4, 1, -3};
```
