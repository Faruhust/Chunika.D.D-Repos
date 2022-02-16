//Структуры и массивы структур
#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>

using namespace std;

#define amount_of_elements 3
struct Details {


    string elem;
    char type;
    int temp;
    int speed;


}det[4];

void in_put(Details det[]) {


    for (int i = 0; i < amount_of_elements; ++i) {

        cout << i + 1 << "введите: Вещество ,тип , Температура (град.С), Скорость (м/сек): ";
        cin >> det[i].elem >> det[i].type >> det[i].temp >> det[i].speed;

    }

}

void random(Details det[]) {

    char letters[] = { 'Ч', 'М' };
    static string name_rand[] = { "Анилин", "Ртуть", "Кедровое" };
    
    for (int i = 0; i < amount_of_elements; i++) {

        det[i].elem = name_rand[rand() % 3];
        det[i].type = letters[rand() % 3];
        det[i].temp = rand() %97 ;
        det[i].speed = rand() %97 * 67;

    }
}

void sort(Details det[]) {


    if (det[0].temp > det[1].temp) {
        swap(det[0], det[1]);

    }

    if (det[0].temp > det[2].temp) {
        swap(det[0], det[2]);

    }

    if (det[1].temp > det[2].temp) {
        swap(det[1], det[2]);

    }

}

void print(Details det[]) {
    printf("------------------------------------------------------------------\n");
    printf("|Проекты поиска внеземных сигналов                                |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("|  Вещество  |      Тип       |   Температура   |    Скорость     |\n");
    printf("|            |                |      (град.С)   |     (м/сек)     |\n");
    printf("|------------|----------------|-----------------|-----------------|\n");
    for (int i = 0; i < amount_of_elements; i++) {
        cout << "|";
        cout.width(12);
        cout << det[i].elem;
        printf("|   %c            |  %-9.1d      | %14ld  |\n",
                  det[i].type, det[i].temp, det[i].speed);
    }
    printf("|-----------------------------------------------------------------|\n");
    printf("| Тип жидкости                                                    |\n");
    printf("| Ч - чистое вещество                                             |\n");
    printf("| М - масло                                                       | \n");
    printf("-------------------------------------------------------------------\n");
    cout << "\n\n\n\n";




}

int main() {

    srand(time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int action = 0;
    while (true) {

        for (int i = 0; i < 1; i++) {

            cout << "1 – случайным, 2 - ввод с экран, 3 – сортировка, 4 – печать, 5 - завершить роботу ";
            cin >> action;

            if (action == 1) {
                random(det);
            }
            else if (action == 2) {
                in_put(det);
            }
            else if (action == 3) {
                sort(det);
            }
            else if (action == 4) {
                print(det);
            }
            else if (action == 5) {
                exit(0);
            }
        }

    }



    return 0;
}