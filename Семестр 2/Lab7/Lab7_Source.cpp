#include "Lab7_Header.h"

//Stats liquid;




int countLine(Stats liquid) {

    FILE* data;
    size_t countLine = 0u;

    if ((data = fopen("data.txt", "r")) == NULL)
        return 0u;
    while (!feof(data)) {
        fscanf(data, "%s%s%hd%f", liquid.name, &liquid.type, &liquid.tempr, &liquid.speed);
        countLine++;
    }

    fclose(data);

    return countLine;

}



void input_backlist(Stats liquid) {

    FILE* data = fopen("data.txt", "a+");

    if (data == NULL) {
        puts("System ERROR");
        exit(0);
    }
    else {

        for (int i = 0; i < amount_of_elements; ++i) {

            cout << i + 1 << ") Введите: вещество, тип, температуру, скорость : ";
            cin >> liquid.name >> liquid.type >> liquid.tempr >> liquid.speed;
            fprintf(data, "%s\t%c\t%d\t%lg\n", liquid.name, liquid.type, liquid.tempr, liquid.speed);
        }
    }

    fclose(data);
}



void input_forvardlist(Stats liquid) {


    FILE* data = fopen("data.txt", "r+");

    if (data == NULL) {
        puts("System ERROR");
        exit(0);
    }
    else {
        for (int i = 0; i < amount_of_elements; ++i) {
            cout << i + 1 << ") Введите: вещество, тип, температуру, скорость : ";
            cin >> liquid.name >> liquid.type >> liquid.tempr >> liquid.speed;
            fprintf(data, "%s\t%c\t%d\t%lg\n", liquid.name, liquid.type, liquid.tempr, liquid.speed);
        }
    }

    fclose(data);
}

void random(Stats liquid) {

    FILE* data = fopen("data.txt", "a");

    int choose;
    cout << "Введите количество рандомных записей ->  ";
    cin >> choose;


    char letters[] = { 'O', 'P' ,'B' };
    static char name_rand[3][20] = { "Кедровое", "Анилин", "Ртуть" };
    for (int i = 0; i < choose; i++) {

        liquid.name = name_rand[rand() % 3];
        liquid.type = letters[rand() % 3];
        liquid.tempr = rand() / 1500 + 1;
        liquid.speed = rand() / 40 + 10.0;

        fprintf(data, "%s\t%c\t%d\t%lg\n", liquid.name, liquid.type, liquid.tempr, liquid.speed);


    }
    fclose(data);
}




void print(Stats liquid) {

    FILE* data = fopen("data.txt", "r");

    /* Вывод таблицы */
    cout << "----------------------------------------------------\n";
    cout << "|                Скорость звука в жидкостях         |\n";
    cout << "|---------------------------------------------------|\n";
    cout << "|  Вещество  |  Тип  | Температура |Скорость (м/сек)|\n";
    cout << "|------------|-------|-------------|----------------|\n";
    /* вывод строк фактических данных */
    for (int i = 0; i < amount_of_elements; i++) {
        fscanf(data, "%s%s%d%f", liquid.name, &liquid.type, &liquid.tempr, &liquid.speed);
        printf("|%12s|   %c   |  %-9.1d  | %14lg |\n",
            liquid.name, liquid.type, liquid.tempr, liquid.speed);

    }
    cout << "----------------------------------------------------\n";
    cout << "|  Тип жидкости: Ч - чистое вещество, М - масло     | \n";
    cout << "----------------------------------------------------\n";
    cout << "\n\n\n\n";

    fclose(data);
}



void print_all(Stats liquid) {

    FILE* data = fopen("data.txt", "r");

    /* Вывод таблицы */
    cout << "----------------------------------------------------\n";
    cout << "|                Скорость звука в жидкостях         |\n";
    cout << "|---------------------------------------------------|\n";
    cout << "|  Вещество  |  Тип  | Температура |Скорость (м/сек)|\n";
    cout << "|------------|-------|-------------|----------------|\n";
    /* вывод строк фактических данных */
    for (size_t i = 0; i < countLine(liquid) - 1; i++) {
        fscanf(data, "%s%s%d%f", liquid.name, &liquid.type, &liquid.tempr, &liquid.speed);
        printf("|%12s|   %c   |  %-9.1d  | %14lg |\n",
            liquid.name, liquid.type, liquid.tempr, liquid.speed);
    }

    cout << "----------------------------------------------------\n";
    cout << "|  Тип жидкости: Ч - чистое вещество, М - масло     | \n";
    cout << "----------------------------------------------------\n";
    cout << "\n\n\n\n";

    fclose(data);
}




void listNumberPrint(Stats liquid) {

    FILE* data = fopen("data.txt", "r");

    int choose;

    cout << "What information by number do you whant to see?  ";
    cin >> choose;
    /* Вывод таблицы */
    cout << "----------------------------------------------------\n";
    cout << "|                Скорость звука в жидкостях         |\n";
    cout << "|---------------------------------------------------|\n";
    cout << "|  Вещество  |  Тип  | Температура |Скорость (м/сек)|\n";
    cout << "|------------|-------|-------------|----------------|\n";
    /* вывод строк фактических данных */

    for (size_t i = 0; i < choose; i++) {
        fscanf(data, "%s%s%d%f", liquid.name, &liquid.type, &liquid.tempr, &liquid.speed);
    }

    printf("|%12s|   %c   |  %-9.1d  | %14lg |\n",
        liquid.name, liquid.type, liquid.tempr, liquid.speed);


    cout << "----------------------------------------------------\n";
    cout << "|  Тип жидкости: Ч - чистое вещество, М - масло     | \n";
    cout << "----------------------------------------------------\n";
    cout << "\n\n\n\n";

    fclose(data);
}