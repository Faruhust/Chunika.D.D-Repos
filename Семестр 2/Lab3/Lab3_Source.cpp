#include "Lab3_Header.h"
void Print(int* pArr)
{
	for (int i = 0; i < N; i++)
	{

		cout << *(pArr + i) << setw(6);
	}
	cout << endl;
}
void RandomGenerize(int* pArr)
{
	int random;
	for (int i = 0; i < N; i++)
	{
		random = ((rand() % 50) - 25);
		*(pArr + i) = random;
	}
}
