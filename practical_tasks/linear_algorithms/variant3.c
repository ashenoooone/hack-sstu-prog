#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void task1(void) {
    /* Вычислить значение выражения e^(-x)-cosx+sin2xy */
    float x = 1, y = 1;
    float ans = exp(-x) - cos(x) + sin(2*x*y);
    printf("%f\n", ans);
}

void task2(void) {
    /* Написать программу, которая подсчитывает среднее геометрическое модулей двух данных чисел */
    float a, b;
    printf("Введите два числа a и b: ");
    scanf("%f%f", &a, &b);
    printf("%f\n", (fabs(a)+fabs(b))/2);
}

void task3(void) {
    /* Дано натуральное число n>99. Найти цифру сотен в нем */
    int ans, n;
    printf("Введите натуральное число n>99: ");
    scanf("%d", &n);
    ans = n / 100 % 10;
    printf("Цифра сотни: %d\n", ans);
}

int main(int argc, const char * argv[]) {
    task3();
    return 0;
}

