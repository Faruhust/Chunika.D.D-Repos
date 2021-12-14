#include<iostream> 
#include<ctime>
#include<cmath>
#include<iomanip>
#include <chrono>
#define M 100
#define Size_m 50 // Размер нашей матрицы 

using namespace std;
int type;
int sort;
int i, j, key = 0, temp = 0;


void mergesort(int a[], long num)
{
    int b[Size_m];
    int rght, rend;
    int i, j, m;

    for (int k = 1; k < num; k *= 2) {
        for (int left = 0; left + k < num; left += k * 2) {
            rght = left + k;
            rend = rght + k;
            if (rend > num) rend = num;
            m = left; i = left; j = rght;
            while (i < rght && j < rend) {
                if (a[i] <= a[j]) {
                    b[m] = a[i]; i++;
                }
                else {
                    b[m] = a[j]; j++;
                }
                m++;
            }
            while (i < rght) {
                b[m] = a[i];
                i++; m++;
            }
            while (j < rend) {
                b[m] = a[j];
                j++; m++;
            }
            for (m = left; m < rend; m++) {
                a[m] = b[m];
            }
        }
    }
}


int main()
{
    while (true) {

        cout.setf(ios::fixed);
        cout.precision(7); 
        cout << "Merge sort" << endl;
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
                arr[i] = i + 1; //increase 
            }
            else if (type == 2)
            {
                arr[i] = size - (i + 1); //waning 
            }
            else
            {
                arr[i] = rand() % 100 + 1; //random 
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

            mergesort(arr, size);


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