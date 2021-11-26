#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void task1(void) {
    /* Вычислить значение выражения 10sinx+|x^4-x^5 | */
    float x = 1;
    float ans = 10 * sin(x) + fabs(pow(x, 4) - pow(x, 5));
    printf("%f\n", ans);
}

void task2(void) {
    /* Написать программу, которая подсчитывает расстояние между точками с координатами a,b и с ,d */
    int a, b, c, d;
    printf("Введите координаты точек a, b, c, d: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("%f\n", sqrt(pow(abs(a-c), 2) + pow(abs(d-b), 2)));
}

void task3(void) {
    /* Дано трехзначное число. Найти сумму и произведение его цифр. */
    int a, b, c, num;
    printf("Введите трехзначное число: ");
    scanf("%d", &num);
    a = num / 100;
    b = num / 10 % 10;
    c = num % 10;
    printf("Сумма числа: %d\n", a+b+c);
    printf("Произведение его цифр: %d\n", a*b*c);
}

int main(int argc, const char * argv[]) {
    task1();
    task2();
    task3();
    return 0;
}
