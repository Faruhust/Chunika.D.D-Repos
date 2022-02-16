#include <math.h> 
#include <iostream> 
#include <Windows.h> 
#pragma warning(disable : 4996)

int main()
{
    setlocale(LC_ALL, "Russian");

    int g;
    while (1)
    {
        printf("Введите значения g = ");
        scanf("%d", &g);


        if ((g % 100 >= 11) && (19 >= g % 100))
            printf("У меня"" %d ""грибов\n", g);
        else
            if ((g % 10 >= 5) && (9 >= g % 10))
                printf("У меня"" %d ""грибов\n", g);
            else
                if ((g % 10 >= 2) && (4 >= g % 10))
                    printf("У меня"" %d ""грибa\n", g);
                else
                    if (g % 10 == 0)
                        printf("У меня"" %d ""грибов\n", g);
                    else
                        if (g % 10 == 1)
                            printf("У меня"" %d ""гриб\n", g);

                        else
                            printf("У меня"" %d ""грибов\n", g);
    }

    return 0;
}