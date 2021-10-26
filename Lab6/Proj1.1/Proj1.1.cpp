#include <math.h> 
#include <iostream> 
#include <Windows.h> 
#pragma warning(disable : 4996)

int main()
{
    setlocale(LC_ALL, "Russian");

    int k;

    printf("Введите значения k = ");
    scanf("%d", &k);

    if (k == 1)
        printf("У меня"" %d ""гриб", k);
    else
        if ((k >= 5) && (20 >= k)) // > 5 
            printf("У меня"" %d ""грибов", k);
        else
            if ((k >= 2) && (4 >= k))
                printf("У меня"" %d ""грибa", k);
            else
                if (k == 0)
                    printf("У меня нет грибов", k);
                else
                    printf("У меня"" %d ""грибов", k);


    return 0;
}