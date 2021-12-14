#include <iostream>
using namespace std;
int ConvertMyArrayToMatrix(int* MyArray, int average) {
    const int M = 3;
    const int N = 3;
    int temp = 0;
    int Matrix[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Matrix[i][j] = MyArray[temp];
            temp++;
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        int max = 0;
        for (int j = 0; j < M; j++)
        {
            if ((Matrix[j][i] > Matrix[j + 1][i]) && (Matrix[j][i] > max))
            {
                max = Matrix[j][i];
            }
        }
        average += max;
        cout << "В " << i + 1 << " столбце максимальный элемент: " << max << endl;
    }
    average /= 3;
    return average;
}

int main() {
    setlocale(LC_ALL, "ru");
    const int size = 9;
    int average = 0;
    int MyArray[size] = { 1, 2, 3, 5, 6, 7, 8, 9, 0 };
    for (int i = 0; i < size; i++) {
        cout << MyArray[i] << " ";
    }
    cout << endl << endl;
    int result = ConvertMyArrayToMatrix(MyArray, average);
    cout << "Среднее значение из максимальных значений столбцов матрицы: " << result << endl;
}