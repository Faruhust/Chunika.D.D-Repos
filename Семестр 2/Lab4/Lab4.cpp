#include "Lab4_Header.h" 




int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int N = 0;
	cout << "Программа находит наименьший элемент одномерного массива и переставляет его с последним нечетным элементом." << endl;
	cout << "После чего переписывает в новый массив все отрицательные элементы с нечетными индексами и выводит его." << endl;
	cout << "Введите размер массива: " << endl;
	cin >> N; //размер массивов

	int* pArr = new int[N];
	int* pResultarr = new int[N]; //создание двух динамических массивов

	RandomGenerize(pArr, N);

	SwapElements(pArr, pResultarr, N);
	delete[] pArr; //очистка памяти
	delete[] pResultarr;
}
