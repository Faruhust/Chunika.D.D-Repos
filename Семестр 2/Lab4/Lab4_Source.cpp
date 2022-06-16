#include "Lab4_Header.h"
void RandomGenerize(int* pArr, int N)
{
	int random; //переменная для обмена значениями
	for (int i = 0; i < N; i++)
	{
		random = ((rand() % 50) - 25);
		*(pArr + i) = random;
	}
}
void SwapElements(int* pArr, int* pResultarr, int N)
{

	int numberofpoints = 0;  //счётчик отрицательных элементов с нечётными индексами
	int* pBuff = pArr;
	int* pResultBuff = pResultarr;
	int* pMin; //указатель на минимальный элемент
	int* pUncount; //указатель на последний нечетный элемент

	pUncount = pArr;

	cout << endl << "Случайно сгенерированный массив: " << endl;
	for (int i = 0; i < N; i++)
	{

		cout << *(pArr + i) << setw(6); //вывод массива
	}
	pMin = pArr;
	for (int i = 0; i < N; i++) {
		if (*pArr < *pMin) {
			pMin = pArr; //поиск минимального элемента
		}


		pArr++;
	}
	pArr = pBuff;
	for (int i = 0; i < N; i++) {
		bool countable = (*pArr) % 2;

		if (countable)
		{
			pUncount = pArr; //поиск последнего нечетного элемента элемента
		}
		pArr++;
	}
	pArr = pBuff;
	cout << endl << endl;
	cout << "Минимальный элемент = " << *pMin << endl;
	cout << "Последний нечётный элемент = " << *pUncount << endl;
	swap(*(pMin), *pUncount); //смена позиций между минимальным и последним нечётным элементом
	cout << endl;
	cout << "Массив после перестановки наименьшего элемента с последним нечётным элементом массива: " << endl;
	for (int i = 0; i < N; i++)
	{

		cout << *(pArr + i) << setw(6);
	}
	cout << endl << endl;
	cout << "Минимальный элемент = " << *pMin << endl;
	cout << "Последний нечётный элемент = " << *pUncount << endl << endl;

	for (int i = 0; i < N; i++) //поиск по массиву отрицательных элементов с нечётными индексами
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
	pResultarr = pResultBuff;
	pArr = pBuff;
	cout << "Массив отрицательных элементов с нечётным индексом : " << endl;
	for (int i = 0; i < numberofpoints; i++)
	{

		cout << *(pResultarr + i) << setw(6);
	}
	cout << endl;

}