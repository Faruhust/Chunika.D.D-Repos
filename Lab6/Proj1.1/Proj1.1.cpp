#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h> 
#include <time.h> 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    int comp_num = rand() % 100;
    int we = 0;
    int popytky = 0;

    while (comp_num != we) {
        popytky++;
        printf("Введите число от 1 до 100 ");
        scanf("%lf", &we);
        if (we <= 0)
            printf(" Это число слишком маленькое\n");
        else if (we > 100)
            printf("Это число слишком большое\n ");
        else if (comp_num = we)
            printf("Ура! вы угадали \n");
        printf("-У вас было столько попыток \n", &popytky);
    }
        return 0;
 
}