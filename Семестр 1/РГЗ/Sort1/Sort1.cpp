#include<iostream> 
#include<ctime>
#include<cmath>
#include<iomanip>
#include <chrono>
#define M 100


using namespace std;
int type;
int sort;
int i, j, key = 0, temp = 0;


void InsertSort(int* mas, int n) //сортировка вставками
{
    for (i = 0; i < n - 1; i++)
    {
        key = i + 1;
        temp = mas[key];
        for (j = i + 1; j > 0; j--)
        {
            if (temp < mas[j - 1])
            {
                mas[j] = mas[j - 1];
                key = j - 1;
            }
        }
        mas[key] = temp;
    }
}


int main()
{
    while (true) {

        cout.setf(ios::fixed);
        cout.precision(7); 
        cout << "InsertSort" << endl;
        int size;
        cout << "Input array type: ";
        cin >> type;
        cout << "Input array size: ";
        cin >> size;

        int arr[1000];

        cout << "Unsorted array:" << endl;
        for (i = 0; i < size; i++)
        {
            if (type == 1)
            {
                arr[i] = i + 1; //increasing
            }
            else if (type == 2)
            {
                arr[i] = size - (i + 1); //reverse increasing
            }
            else
            {
                arr[i] = rand() % 100 + 1; //randomized  
            }


            cout << arr[i] << " ";
        }

        int prep_arr[100];
        for (int i = 0; i <= size; ++i) {
            prep_arr[i] = arr[i];

        }

        double dur_arr[M];
        double aver_dur = 0;
        for (int i = 0; i < M; i++)
        {

            auto start = chrono::high_resolution_clock::now();

            InsertSort(arr, size);


            auto end = chrono::high_resolution_clock::now();
            chrono::duration<double> duration = end - start;

            dur_arr[i] = duration.count();

            cout << "\nSorted array:" << endl;
            for (int i = 0; i < size; i++) {
                cout << setw(3) << arr[i];
            }

            cout << "\nUnsorted array:" <<endl;
            for (int i = 0; i < size; ++i) {
                arr[i] = prep_arr[i];
                cout << setw(3) << arr[i];
            }


        }
        for (int i = 0; i < M; i++) {
            cout << "\nDuration " << i << " = " << dur_arr[i] << "s\n";
        }

        double temp = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M - i - 1; j++) {
                if (dur_arr[j] > dur_arr[j + 1]) {
                    temp = dur_arr[j];
                    dur_arr[j] = dur_arr[j + 1];
                    dur_arr[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < M; i++) {
            cout << "\nDuration test " << i << " = " << dur_arr[i] << "s\n";
        }

        for (int i = ((M / 100) * 45); i < M - ((M / 100) * 45); ++i) {
            aver_dur += dur_arr[i];
        } aver_dur = aver_dur / ((M / 100) * 10);

        cout << "\nThe time:" << aver_dur << "s\n";


    }

    return 0;
}