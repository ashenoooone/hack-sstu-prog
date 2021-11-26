#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void task1(void) {
    /* Вычислить значение выражения 1+x/3+|x|+(x^3+4)/2 */
    float x = 1;
    float ans = 1 + (x/3)+fabs(x)+(pow(x, 3)+4)/2;
    printf("%f\n", ans);
}

void task2(void) {
    /* Написать программу, которая подсчитывает гипотенузу прямоугольного треугольника по двум данным катетам */
    float a, b;
    printf("Введите два катета a и b: ");
    scanf("%f%f", &a, &b);
    printf("%f\n", sqrt(pow(a, 2) + pow(b, 2)));
}

void task3(void) {
    /* Дано натуральное число n>9. Найти цифру десятков в нем. */
    int ans, n;
    printf("Введите натуральное число n>9: ");
    scanf("%d", &n);
    ans = n / 10 % 10;
    printf("Цифра десятка: %d\n", ans);
}

int main(int argc, const char * argv[]) {
    task1();
    return 0;
}

