#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Одз X [ -1 , -1 ] Кроме нуля
	double x;
	double a = 2, m = 6;
	double n = 7;
	double t1, t2;   
	double ax;       

	printf("Введите x = ");
	scanf("%lf", &x);

	ax = a * x;
	t1 = (1 / (4 * pow(a, 3))) * log((pow(a, 2) + pow(x, 2)) / (pow(a, 2) - pow(x, 2)));
	ax = a * x;
	t2 = pow(cos(ax), n - 1) / (a * (m - 1) * pow(sin(ax), m - 1));

	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);
	return 0;
}