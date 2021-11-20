#include <hack-sstu-prog.h>
void sort(int *mass, int k)
// ф-ция сортировки массива по возрастанию
{
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