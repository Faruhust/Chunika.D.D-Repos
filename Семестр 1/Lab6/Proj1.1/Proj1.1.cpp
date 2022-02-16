#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <Windows.h>

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	int num = rand() % 100;

	int j = 0;
	int num2 = 0;
	printf("Отгадайте число от 0 до 100\n");
	while (num2 != num)
	{
		++j;
		printf("Введите ваше значениe ");
		scanf("%d", &num2);
		if (num > num2)
			printf("Загаданное число больше вашего\n");
		else if (num < num2)
			printf("Загаданное число меньше вашего\n");
		else if (num2 > 100)
			printf("Недопустимое Значение\n");
	}
	printf("Вы угадали за"" %d ""попыток\n", j);
	printf("\n\n\n");
	return 0;
}