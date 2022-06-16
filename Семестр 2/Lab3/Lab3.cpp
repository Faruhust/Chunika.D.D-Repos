#include "Lab3_Header.h"


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int numberofpoints = 0;
	int arr[N];
	int resultarr[N];
	int* pArr;
	pArr = arr;
	int* pResultarr;
	pResultarr = resultarr;
	int* pMin;
	int* pUncount;

	pUncount = arr;
	RandomGenerize(pArr);
	cout << "Случайно сгенерированный массив: " << endl;
	Print(pArr);
	pMin = arr;
	for (int i = 0; i < N; i++) {
		if (*pArr < *pMin) {
			pMin = pArr;
		}


		pArr++;
	}
	pArr = arr;
	for (int i = 0; i < N; i++) {
		bool countable = (*pArr) % 2;

		if (countable)
		{
			pUncount = pArr;
		}
		pArr++;
	}
	pArr = arr;
	cout << "Массив после нахождения наименьшего элемента и последнего нечётного элемента массива: " << endl;
	Print(pArr);
	cout << "Минимальный элемент = " << *pMin << endl;
	cout << "Последний нечётный элемент = " << *pUncount << endl;

	swap(*(pMin), *pUncount);

	cout << "Массив после перестановки наименьшего элемента с последним нечётным элементом массива: " << endl;
	Print(pArr);
	cout << "Минимальный элемент =g " << *pMin << endl;
	cout << "Последний нечётный элемент = " << *pUncount << endl;

	for (int i = 0; i < N; i++)
	{
		bool Res = i % 2;

		if ((Res) && ((*pArr) < 0)) {
			*pResultarr = *pArr;
			pArr++;
			pResultarr++;
			numberofpoints += 1;
		}
		else {
			pArr++;
		}
	}
	pArr = arr;
	pResultarr = resultarr;
	cout << "Массив отрицательных элементов с нечётным индексом : " << endl;
	for (int i = 0; i < numberofpoints; i++)
	{

		cout << *(pResultarr + i) << setw(6);
	}
	cout << endl;
}