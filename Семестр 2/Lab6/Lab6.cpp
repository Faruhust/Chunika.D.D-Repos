#include "Lab6_Header.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//setlocale(LC_ALL, "ru");
	int N = 300; //количество допустимых символов
	char* buf = new char[N]; //выделение памяти под строку
	int size; //размер длинны под которую нужно выравнивать строку по правому краю
	std::cout << "Введите строку(не более 299 символов): ";

	std::cin.getline(buf, (N)); //ввод строки
	if (strlen(buf) >= (N - 1))
	{
		cout << "ERROR " << endl;
		cout << "Вы ввели строку большего размера чем нужно, программа вынуждена завершить работу" << endl;
		delete[] buf;
		return 0;

	}

	std::cout << "Введите количество длинны,под которое вы хотите уравнять строку по правому краю: ";
	std::cin >> size;
	while ((size > 4294967294) || (size < 0))
	{
		std::cout << "ERROR: недопустимое значение, введите повторно: ";
		std::cin >> size; //проверка на допустимый ввод значения, на которое необходимо выровнять строку по правому краю
	}
	std::cout << std::endl << "Итоговая строка : " << std::endl;
	FuncConcatination(buf, size); //вызов функции
	delete[] buf; //освобождение памяти
	return 0;
}