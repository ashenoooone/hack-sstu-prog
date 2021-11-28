#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void task1(void) {
    /* Вычислить значение выражения ln|cosx|/(ln⁡(1+x^2)) */
    float x = 1;
    float ans = log(fabs(cos(x)))/(log(1+pow(x, 2)));
    printf("%f\n", ans);
}

void task2(void) {
    /* Написать программу, которая подсчитывает периметр прямоугольного треугольника по двум катетам */
    float a, b;
    printf("Введите два катета треугольника a и b: ");
    scanf("%f%f", &a, &b);
    printf("%f\n", sqrt(pow(a, 2) + pow(b, 2)) + a + b);
}

void task3(void) {
    /* Дано трехзначное число. Составить программу вывода на экран числа, полученного перестановкой цифр сотен и десятков */
    int a, b, c, n;
    printf("Введите трехзначное число: ");
    scanf("%d", &n);
    a = n / 100 % 10;
    b = n / 10 % 10;
    c = n % 10;
    printf("После перестановки: %d%d%d\n", b, a, c);
}

int main(int argc, const char * argv[]) {
    task3();
    return 0;
}

