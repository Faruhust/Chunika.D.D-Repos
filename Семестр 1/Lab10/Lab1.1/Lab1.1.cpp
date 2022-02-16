#include <stdio.h>
#include <conio.h>       

char f(int a, int b)
{
	if (a > b)return '>';
	if (a < b)return '<';
	return '=';
}

int main() {
	printf("%c", f(/*x*/, /*y*/)); //Сюды значения
	getchar();
	return 0;
}