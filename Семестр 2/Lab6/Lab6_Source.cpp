#include "Lab6_Header.h"

void FuncConcatination(char* buf, int size)
{
	char* result = new char[size + 1];//�������� ������ ��� ������ �������� [size+1], � ������� ����� �������� �������


	for (unsigned int i = 0; i < size; i++) // � ������� ����� ��������� ������ result ���������
	{
		result[i] = ' ';
	}

	for (unsigned int i = 0; i < size; i++)
	{
		cout << result[i]; //����� �������� ��� ���������� ������������
	}
	cout << buf; //������������ ������ result � ��������� � ���������� �������� ������������� �������
	delete[] result;


}