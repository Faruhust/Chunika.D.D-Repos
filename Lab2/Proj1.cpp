#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <stdio.h>
#include <iostream>
#include <windows.h>
int main(void) {


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int na1[9], na2[9], na3[9];
	char ruk1, ruk2, ruk3;
	unsigned long  dia1, dia2, dia3;
	unsigned long hz1, hz2, hz3;
	/* Введение фактических данных*/
	printf("1. Введите: Вещество, Тип, Температуру (град.С), Скорость (м/с) >");
	scanf("%s %s %d %d", na1, &ruk1, &dia1, &hz1);
	printf("2. Введите: Вещество, Тип, Температуру (град.С), Скорость (м/с) >");
	scanf("%s %s %d %d", na2, &ruk2, &dia2, &hz2);
	printf("3. Введите: Вещество, Тип, Температуру (град.С), Скорость (м/с) >");
	scanf("%s %s %d %d", na3, &ruk3, &dia3, &hz3);
	/* Вывод таблицы */
	/* вывод заголовков */
	printf("|---------------------------------------------|\n");
	printf("|         Скорость звука в жидкостях          |\n");
	printf("|---------------------------------------------|\n");
	printf("|   Год    |   Нацчный    |Диаметр|   Рабочая   |\n");
	printf("|          | Руководитель |Антены |   Частота   |\n");
	printf("|----------|-------|-----------|--------------|\n");
	printf("| %-8s | %-5c | %-9d | %-12d |\n", na1, ruk1, dia1, hz1);
	printf("| %-8s | %-5c | %-9d | %-12d |\n", na2, ruk2, dia2, hz2);
	printf("| %-8s | %-5c | %-9d | %-12d |\n", na3, ruk3, dia3, hz3);
	printf("|---------------------------------------------|\n");
	return 0;
}