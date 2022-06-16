#include "Lab6_Header.h"

void FuncConcatination(char* buf, int size)
{
	char* result = new char[size + 1];//выдел€ем пам€ть под строку размером [size+1], в которой будут хранитс€ пробелы


	for (unsigned int i = 0; i < size; i++) // с помощью цикла заполн€ем массив result пробелами
	{
		result[i] = ' ';
	}

	for (unsigned int i = 0; i < size; i++)
	{
		cout << result[i]; //вывод пробелов дл€ дальнейшей конкатенации
	}
	cout << buf; //конкатенаци€ строки result с пробелами с изначально введЄнной пользователем строкой
	delete[] result;


}