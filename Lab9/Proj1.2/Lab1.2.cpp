#include <iostream>
#include <windows.h>
using namespace std;
#include<iomanip>
#define M 5

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[M][M];
    int mass[M][M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = rand() % 10 + 1;
            mass[i][j] = arr[i][j];
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    int max = 0;
    int temp = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] >= arr[i][max])
                max = j;

        }
        cout << "Максимальное значение в строке:" << arr[i][max] << endl;

        temp = arr[i][0];
        arr[i][0] = arr[i][max];
        arr[i][max] = temp;
        max = 0;
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
    cout << "Исходный массив:\n";
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(4) << mass[i][j];
        }
        cout << endl;
    }
    int min = 0;
    int change = 0;
    for (int j = 0; j < M; j++)
    {
        for (int i = 0; i < M; i++) {
            if (mass[i][j] <= mass[min][j])
                min = i;
        }
        cout << "Минимальное значение столбца:" << mass[min][j] << endl;
        change = mass[M - 1][j];
        mass[M - 1][j] = mass[min][j];
        mass[min][j] = change;
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << setw(4) << mass[i][j];
        }
        cout << endl;
    }

    return 0;
}