#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	long float a, b, c, x, x1, x2, D;
	
	printf("Введите значеия a = ");
	scanf("%lf", & a);
	printf("Введите значеия b = ");
	scanf("%lf", & b);
	printf("Введите значеия c = ");
	scanf("%lf", & c);

	D = (pow(b, 2) - (4 * a * c));
	x1 = (-b + sqrt(D)) / 2 * a;
	x2 = (-b - sqrt(D)) / 2 * a;
	x = -b / 2 * a;
	
	if (D > 0)
			printf("x1 = %lf \n", x1) && printf("x2 = %lf \n", x2);
		else
			if (D == 0)
			printf("Один корень уравнения, x = %lf ", x );
		else
				if (D < 0)
			printf("Нету корней уравнения");

}
