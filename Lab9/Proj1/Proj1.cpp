#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#define N 9


int main()
{

    srand((int)time(NULL));
    int array[N][N], sumCol[N] = {}, sumStr[N] = {};
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            array[i][j] = rand() % 10;
            if (N - i - 1 != j)
            {
                sumStr[i] += array[i][j];
                sumCol[j] += array[i][j];
            }
        }
    for (int i = 0, k = N - 1; i < N; i++, k--)
    {
        for (int j = 0; j < N; j++)
        {
            if (N - i - 1 == j)
                array[i][j] = sumStr[i] + sumCol[k];
            printf("%3d", array[i][j]);

        }
        printf("\n");
    }
}
