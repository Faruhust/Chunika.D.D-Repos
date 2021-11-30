#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <Windows.h>
int Ar[200];					//Начальный массив
int mas[200];					//Изменяемый массив 
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i, j, v, t;					//Элементы в масивах
	int av;							//Среднее
	int nn;							//Неизвестная
	int ib, qq, q;

	rand();


	for (i = 0; i < 200; Ar[i++] = rand()%100 - 50);						//Элементу масива присваевается число от -50 до +50

		printf ("Начальный массив");										//Выведение на экран масива
	for (i = 0; i < 200; printf("%3d  ", Ar[i++]));							
	putchar('\n');
	putchar('\n');

	for (nn = i = 0; i < 200; i++) {
		if (Ar[i] < 0)

			if (!nn) {

				ib = i; av = Ar[i]; nn = 1;
			}
			else {

				av += Ar[i]; nn++;
			}

		else
			if (nn) {

				av /= nn;							//Присвоения среднего
				v = 0; t = 0;
				for (j = ib; j < i; j++)
					if (Ar[j] < av)Ar[j] = av; {
					t++;
					mas[t] = av;
					nn = 0;

				}


				printf("%3d ", mas[t]);



			}
	}

	;




	putchar('\n');


	getchar();
	return 0;
}