# 🧑‍🎓 hack-sstu-prog. C тебя логика — с нас всё остальное.

### Установка
1. Скачать файлы `hack-sstu-prog.c` и `hack-sstu-prog.h`.
2. Поместить в корневой файл своего проекта.
3. В основной файл включить библиотеку командой `#include "hack-sstu-prog.h"`

### Методы библиотеки

#### Строки
- `int count(const void *mass, void ch, int length)` - возвращает количество вхождений элемента в массиве. Принимает char, int, float. <br />
- `void reverse(char *mass)` - перестраивает элементы массива в обратном порядке. <br />
- `void replace(char *mass, char old, char new)` - замена всех вхождений символа *old* на *new*. <br />
- `void idDigit(char *mass)` - возвращает **true**, если есть хотя бы один символ или все символы являются цифрами, иначе **false**. Не путать с функцией *isdigit*! <br />
#### Числа
- `void sort(int *mass, int k)` - пузырьковая сортировка. <br />
- `long long int max(const long long int *mass, int k)` - возвращает максимальный элемент массива. <br />
- `long long int min (const long long int *mass, int k)` - возвращает минимальный элемент массива. <br />
- `long long int sum (const int *mass, int k)` - возвращает сумму элементов в массиве. <br />
