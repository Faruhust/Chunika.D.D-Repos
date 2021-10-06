#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char na1[9], na2[9], na3[9];
	char type1, type2, type3;
	int  celc1, celc2, celc3;
	int  sp1, sp2, sp3;
	printf("1. Введите: Вещество, Тип, Температуру (град.С), Скорость (м/с) >");
	scanf("%s %с %d %d" , na1, &type1, &celc1, &sp1);
	printf("2. Введите: Вещество, Тип, Температуру (град.С), Скорость (м/с) >");
	scanf("%s %с %hu %hu" , na2, &type2, &celc2, &sp2);
	printf("3. Введите: Вещество, Тип, Температуру (град.С), Скорость (м/с) >");
    scanf("%s %с %hu %hu" , na3, &type3, &celc3, &sp3);
	printf("|---------------------------------------------|\n");
	printf("|         Скорость звука в жидкостях          |\n");
	printf("|---------------------------------------------|\n");
	printf("| Вещество |  Тип  |Температура|   Скорость   |\n");
	printf("|          |       |  (град.С) |    (м/сек)   |\n");
	printf("|----------|-------|-----------|--------------|\n");
	printf("| %11s | %c | %3hu | %d |\n", na1, type1, celc1, sp1);
	printf("| %11s | %c | %3hu | %d |\n", na2, type2, celc2, sp2);
	printf("| %11s | %c | %3hu | %d |\n", na3, type3, celc3, sp3);
	printf("|---------------------------------------------|\n");
	printf("|      Ч - чистое вещество, М - масло;        |\n");
	printf("|---------------------------------------------|\n");
	return 0;
}