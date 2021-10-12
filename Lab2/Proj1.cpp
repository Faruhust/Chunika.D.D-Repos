#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <stdio.h>
#include <iostream>
#include <windows.h>
int main(void) {


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char na1[9], na2[9], na3[9];
	char type1, type2, type3;
	unsigned long  celc1, celc2, celc3;
	unsigned long sp1, sp2, sp3;
	/* Введение фактических данных*/
	printf("1. Введите: Вещество, Тип, Температуру (град.С), Скорость (м/с) >");
	scanf("%s %c %d %d", na1, &type1, &celc1, &sp1);
	printf("2. Введите: Вещество, Тип, Температуру (град.С), Скорость (м/с) >");
	scanf("%s %c %d %d", na2, &type2, &celc2, &sp2);
	printf("3. Введите: Вещество, Тип, Температуру (град.С), Скорость (м/с) >");
	scanf("%s %c %d %d", na3, &type3, &celc3, &sp3);
	/* Вывод таблицы */
	/* вывод заголовков */
	printf("|---------------------------------------------|\n");
	printf("|         Скорость звука в жидкостях          |\n");
	printf("|---------------------------------------------|\n");
	printf("| Вещество |  Тип  |Температура|   Скорость   |\n");
	printf("|          |       |  (град.С) |    (м/сек)   |\n");
	printf("|----------|-------|-----------|--------------|\n");
	printf("| %-8s | %-5c | %-9d | %-12d |\n", na1, type1, celc1, sp1);
	printf("| %-8s | %-5c | %-9d | %-12d |\n", na2, type2, celc2, sp2);
	printf("| %-8s | %-5c | %-9d | %-12d |\n", na3, type3, celc3, sp3);
	printf("|---------------------------------------------|\n");
	printf("|      Ч - чистое вещество, М - масло;        |\n");
	printf("|---------------------------------------------|\n");
	return 0;
}