#include <iostream>
#include "math.h"
using namespace std;



int main()
{
    setlocale(LC_ALL, "ru");
    const int size = 200;
    int MyArray[size];
    int result = 0, average = 0;
    double min = 0, score = 0, temp = 0;
    for (int i = 0; i < size; i++)
    {
        MyArray[i] = rand() % 100 - 50;
        cout << MyArray[i] << '\ ';
    }
    cout << endl << endl << "Непрерывная последовательность отрицательных чисел :";
    for (int i = 0; i < size; i++)
    {
        if (MyArray[i] < 0) {
            min += fabs(MyArray[i]);
            cout << MyArray[i] << '\ ';
            score++;
        }
        if (MyArray[i] > 0 && score > 0) {
            cout << endl;
            average = min / score;
            min = 0;
            score = 0;
            temp++;
            cout << "Среднее значение " << temp << " = " << average << endl;
            if (result < average) {
                result = average;
                cout << "Результат выбора найбольшего среднего значения " << temp << " = " << result << endl;
            }
            cout << "Непрерывная последовательность отрицательных чисел :";
        }
    }
    cout << "Абсолютное значение среднего арифметического элементов непрерывной последовательности отрицательных чисел: " << result << endl;
}