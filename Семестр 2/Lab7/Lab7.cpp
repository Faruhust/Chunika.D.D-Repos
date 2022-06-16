#include "Lab7_Header.h"

int main() {

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Stats liquid;
    //menu system 
    int menu_button;
    while (true) {

        cout << " 1 - Запись в начало\n 2 - Запись в конец\n 3 - Случайно\n 4 - Напечатать все\n 5 – Печать последних трех\n 6 - Печать по номеру\n 0 - exit\n -->  ";
        cin >> menu_button;

        if (menu_button == 1) {
            system("cls");
            input_forvardlist(liquid);
        }
        if (menu_button == 2) {
            system("cls");
            input_backlist(liquid);
        }
        if (menu_button == 3) {
            system("cls");
            random(liquid);
        }
        if (menu_button == 4) {
            system("cls");
            print_all(liquid);
        }
        if (menu_button == 5) {
            system("cls");
            print(liquid);
        }
        if (menu_button == 6) {
            system("cls");
            listNumberPrint(liquid);
        }
        if (menu_button == 0) {
            delete[] liquid.name;
            exit(0);
        }

    }


    return 0;
}