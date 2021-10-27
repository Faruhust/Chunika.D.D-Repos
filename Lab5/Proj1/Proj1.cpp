#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main(void) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y;                                    /* координаты точки */
    while (1) {                                          /* ввод координат */
        printf("Введите координату x >");
        scanf("%lf", &x);
        printf("Введите координату y >");
        scanf("%lf", &y);
        /* вывод только что введенных значений */
        printf("x=%6.3lf;  y=%6.3lf\n", x, y);          /* проверка условий */
        if ((y <= 1 - x) && (0 <= x) && (x <= 1) && (0 <= y) && (y <= 1)
            || (-1 - x <= y) && (-1 <= x) && (x <= 0) && (y <= 0) && (-1 <= y))
            printf("Точка попадает в область\n");
        else
            printf("Точка не попадает в область\n");
    }
    return 0;
}
