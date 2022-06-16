#include "Lab4_Header.h"
void RandomGenerize(int* pArr, int N)
{
	int random; //���������� ��� ������ ����������
	for (int i = 0; i < N; i++)
	{
		random = ((rand() % 50) - 25);
		*(pArr + i) = random;
	}
}
void SwapElements(int* pArr, int* pResultarr, int N)
{

	int numberofpoints = 0;  //������� ������������� ��������� � ��������� ���������
	int* pBuff = pArr;
	int* pResultBuff = pResultarr;
	int* pMin; //��������� �� ����������� �������
	int* pUncount; //��������� �� ��������� �������� �������

	pUncount = pArr;

	cout << endl << "�������� ��������������� ������: " << endl;
	for (int i = 0; i < N; i++)
	{

		cout << *(pArr + i) << setw(6); //����� �������
	}
	pMin = pArr;
	for (int i = 0; i < N; i++) {
		if (*pArr < *pMin) {
			pMin = pArr; //����� ������������ ��������
		}


		pArr++;
	}
	pArr = pBuff;
	for (int i = 0; i < N; i++) {
		bool countable = (*pArr) % 2;

		if (countable)
		{
			pUncount = pArr; //����� ���������� ��������� �������� ��������
		}
		pArr++;
	}
	pArr = pBuff;
	cout << endl << endl;
	cout << "����������� ������� = " << *pMin << endl;
	cout << "��������� �������� ������� = " << *pUncount << endl;
	swap(*(pMin), *pUncount); //����� ������� ����� ����������� � ��������� �������� ���������
	cout << endl;
	cout << "������ ����� ������������ ����������� �������� � ��������� �������� ��������� �������: " << endl;
	for (int i = 0; i < N; i++)
	{

		cout << *(pArr + i) << setw(6);
	}
	cout << endl << endl;
	cout << "����������� ������� = " << *pMin << endl;
	cout << "��������� �������� ������� = " << *pUncount << endl << endl;

	for (int i = 0; i < N; i++) //����� �� ������� ������������� ��������� � ��������� ���������
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
	cout << "������ ������������� ��������� � �������� �������� : " << endl;
	for (int i = 0; i < numberofpoints; i++)
	{

		cout << *(pResultarr + i) << setw(6);
	}
	cout << endl;

}