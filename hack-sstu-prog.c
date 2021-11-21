#include <string.h>
#include <limits.h>
#include "hack-sstu-prog.h"

void sort(int *mass, int k)
{
    /* Функция сортировки массива по возрастанию.
     :mass - указатель на массив;
     :k - количество элементов в массиве.
    */
    int temp;
    for (int i = 0; i < k; i++)
    {
        for (int t = 0; t < k - i - 1; t++)
        {
            if (mass[t] > mass[t + 1])
            {
                temp = mass[t];
                mass[t] = mass[t + 1];
                mass[t + 1] = temp;
            }
        }
    }
}

int count_s(char *mass, char ch)
{
    /* Аналог ондоименной функции из python.
     Возвращает количество вхождений элемента в массиве.
     :mass - указатель на массив;
     :ch - символ, вхождения которого нужно посчитать.
     */
    int count = 0;
    for (int i = 0; i < strlen(mass); i++)
    {
        if (mass[i] == ch)
        {
            count++;
        }
    }
    return count;
}

int *set_new_array(int *mass, int k)
{
    /* Ф-ция формирует новое множество из массива.
    Возвращает указатель на мн-ство.
    :mass - указатель на исходный массив;
    :k - количество элементов массива;
    !!не забудьте освободить память в конце программы!!
    */
    int flag = 0, *a = malloc(sizeof(int) * k), len = 0;
    for (int i = 0; i < k; i++)
    {
        flag = 1;
        for (int t = i + 1; t < k; t++)
        {
            if (mass[i] == mass[t])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            a[len] = mass[i];
            len++;
        }
    }
    a = (int *)realloc(a, sizeof(int) * len);
    return a;
}

int set_cur_array(int *b, int k)
{
    /* Ф-ция удаляет из массива повторяющиеся элементы.
    Аналог ф-ции set() из python.
    Возвращает длину мн-ства.
    :b - указатель на массив;
    :k - длина массива;
    */
    for (int i = 0; i < k; i++)
    {
        for (int r = i + 1; r < k; r++)
        {
            if (b[i] == b[r])
            {
                for (int g = r; g < k; g++)
                {
                    b[g] = b[g + 1];
                }
                k--;
                r--;
            }
        }
    }
    return k;
}

int max(int *mas, int k)
{
    /* Функция нахождения максимума в массиве Аналог функции max() в Python.
    :max - Указатель на массив;
    :k - Длинна массива;
    */
    long long int maxi = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        if (mas[i] > maxi)
        {
            maxi = mas[i];
        }
    }
    return maxi;
  
int min(int *mas, int k)
{
    /* Функция нахождения минимума в массиве Аналог функции min() в Python.
    :mas - Указатель на массив;
    :k - Длинна массива;
    */
    long long int mini = INT_MAX;
    for (int i = 0; i < k; i++)
    {
        if (mas[i] < mini)
        {
            mini = mas[i];
        }
    }
    return mini;
}