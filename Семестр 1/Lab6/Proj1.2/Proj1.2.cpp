#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    printf("Тест на знание таблици умножения:\n");

    srand(time(NULL));

    int user_num, result = 0, nquestion;

    for (nquestion = 1; nquestion <= 10; nquestion++) {

        int randomn1 = rand() % 10 + 1;
        int randomn2 = rand() % 10 + 1;
        int question = randomn1 * randomn2;

        printf("%i): %i * %i\n", nquestion, randomn1, randomn2);
        scanf("%i", &user_num);

        if (question != user_num) {
            printf("Ошибка. Правильний ответ: %i\n", question);
        }
        else
            result++;
    }

    printf("Твой общий результат набранных баллов:%i\n", result);

    return 0;
}
