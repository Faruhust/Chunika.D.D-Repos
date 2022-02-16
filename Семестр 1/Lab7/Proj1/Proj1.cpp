/****************************************************/
/*              Лабораторная работа ╧7              */
/*    Вычисление значений периодической функции     */
/*         Пример выполнения. Вариант ╧.          */
/****************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(void) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    short n;        /* параметр внешнего цикла */
    double x, y;    /* абсцисса и ордината графика */
    short h;        /* позиция точки на экране */
                    /* внешний цикл - для 5 периодов */
    for (n = 0; n < 5; n++) {
        printf("|   x   |      y     |\n");
        printf("|-------|------------|\n");
        
        for (x = 0; x < 4; x += 0.25) {
            if (x < 1) y = -x + 1;
            else if (x < 3) y = - sqrt(1 - (x - 2) * (x - 2));
            else y = x - 3;
            printf("| %5.2lf | %10.7lf |", x + n * 4, y);
            h = (y + 5) * 10;
            if (y - 1 - h * 10 > 0.5) h++;
            for (; h > 0; h--) printf(" ");
            printf("*\n");
        }
        printf("Нажмите клавишу Enter...");
        getchar();
    }
    return 0;
}
