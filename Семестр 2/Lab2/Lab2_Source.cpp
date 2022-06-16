#include  "Lab2_Header.h"

struct StructureSpeedInElement {
    string element;
    char TypeOfElement;
    int temperature;
    int speed;
} FieldsForSpisok[N];


int  Filling(int Number1)
{
#ifdef DEBUG
    cout << "Current data and time :" << endl << endl;
    cout << __DATE__ << endl;
    cout << __TIME__ << endl << endl;
#endif
#ifdef PRINT_TYPE
    string RandomElement;
    char RandomTOE;
    int RandomTemp;
    int RandomSpeed;
    srand(time(0));
    int Numb = rand() % 100;


    for (int i = 0; i < N; i++) {
        RandomElement = (rand() % 10) + 65;
        RandomTOE = (rand() % 2) + 1;
        if (RandomTOE == 1) {
            RandomTOE = 'Ч';

        }
        else if (RandomTOE == 2) { RandomTOE = 'М'; }
        else continue;


        RandomTemp = (rand() % 43) + 1;
        RandomSpeed = (rand() % 2000) + 1;
        FieldsForSpisok[i].element = "Random Element " + RandomElement;
        FieldsForSpisok[i].TypeOfElement = RandomTOE;
        FieldsForSpisok[i].temperature = RandomTemp;
        FieldsForSpisok[i].speed = RandomSpeed;

    }
#ifndef DEBUG
    cout << "Name of current file and function" << endl << endl;
    cout << __FILE__ << endl;
    cout << __FUNCTION__ << endl << endl;

#endif
    cout << endl << "Function done corrected" << endl;
    return 0;

#endif
#ifndef PRINT_TYPE

    string FillingElement;
    char FillingTOE;
    int FillingTemp, FillingSpeed;


    for (int i = 0; i < 3; i++)

    {
        cout << "Enter an " << i << " element name" << endl;
        cin >> FillingElement;
        cout << "Enter type of " << i << " element" << endl;
        cin >> FillingTOE;
        cout << "Enter temperature of " << i << " element" << endl;
        cin >> FillingTemp;
        cout << "Enter speed of" << i << " element" << endl;
        cin >> FillingSpeed;
        FieldsForSpisok[i].element = FillingElement;
        FieldsForSpisok[i].TypeOfElement = FillingTOE;
        FieldsForSpisok[i].temperature = FillingTemp;
        FieldsForSpisok[i].speed = FillingSpeed;
    }

    cout << "You entered all of elememnts" << endl;
    cout << endl << "Function done corrected" << endl;
    return Number1;
#endif;

#ifndef DEBUG
    cout << "Name of current file and function" << endl << endl;
    cout << __FILE__ << endl;
    cout << __FUNCTION__ << endl << endl;

#endif

}

int Sort(int Number1)
{
#ifdef DEBUG
    cout << "Current data and time :" << endl << endl;
    cout << __DATE__ << endl;
    cout << __TIME__ << endl << endl;
#endif
    string temp;
    char temp1;
    int temp2;
    int temp3;

    for (int i = 0; i < Number1; i++) {
        for (int j = 0; j < Number1 - 1; j++) {
            if (FieldsForSpisok[j].element > FieldsForSpisok[j + 1].element) {
                // меняем элементы местами 
                temp = FieldsForSpisok[j].element;
                temp1 = FieldsForSpisok[j].TypeOfElement;
                temp2 = FieldsForSpisok[j].temperature;
                temp3 = FieldsForSpisok[j].speed;
                FieldsForSpisok[j].element = FieldsForSpisok[j + 1].element;
                FieldsForSpisok[j + 1].element = temp;
                FieldsForSpisok[j].TypeOfElement = FieldsForSpisok[j + 1].TypeOfElement;
                FieldsForSpisok[j + 1].TypeOfElement = temp1;
                FieldsForSpisok[j].temperature = FieldsForSpisok[j + 1].temperature;
                FieldsForSpisok[j + 1].temperature = temp2;
                FieldsForSpisok[j].speed = FieldsForSpisok[j + 1].speed;
                FieldsForSpisok[j + 1].speed = temp3;
            }

        }
    }
    cout << endl << "Function done corrected" << endl;


#ifndef DEBUG
    cout << "Name of current file and function" << endl << endl;
    cout << __FILE__ << endl;
    cout << __FUNCTION__ << endl << endl;

#endif
    return 0;
}

int PrintToTheScreen(int Number1)
{
#ifdef DEBUG
    cout << "Current data and time :" << endl << endl;
    cout << __DATE__ << endl;
    cout << __TIME__ << endl << endl;
#endif
    if (Number1 == 0)
    {
        cout << "Elements are empty" << endl;
        return 0;
    }
#ifdef PRINT_TYPE
    cout << "\nСкорость звука в жидкостях\n";
    cout << "------------------------------------------------------------------------------\n";
    cout << "|" << "Element " << setw(20) << "|" << "Type Of Element " << setw(3) << "|" << "Temperature " << setw(10) << "|" << "Speed  " << " | \n";
    cout << "------------------------------------------------------------------------------\n";


    for (int i = 0; i < Number1; i++)
    {

        cout << "|" << setw(9) << FieldsForSpisok[i].element << setw(12) << "|" << setw(16) << FieldsForSpisok[i].TypeOfElement << setw(3) << "|" << setw(12) << FieldsForSpisok[i].temperature << setw(10) << "|" << setw(8) << FieldsForSpisok[i].speed << "|\n";


    }
    cout << "------------------------------------------------------------------------------\n"; //________________________________________________________________________ 
    cout << "Type Of Element: 'Ч'- чистое вещество, 'М'- масло\n";

#ifndef DEBUG
    cout << "Name of current file and function" << endl << endl;
    cout << __FILE__ << endl;
    cout << __FUNCTION__ << endl << endl;

#endif
    return 6;
#endif
#ifndef PRINT_TYPE
    cout << "\nСкорость звука в жидкостях\n";
    cout << "------------------------------------------------------------------------------\n";
    cout << "|" << "Element " << setw(13) << "|" << "Type Of Element " << setw(3) << "|" << "Temperature " << setw(10) << "|" << "Speed  " << " | \n";
    cout << "------------------------------------------------------------------------------\n";


    for (int i = 0; i < 3; i++)
    {

        cout << "|" << setw(9) << FieldsForSpisok[i].element << setw(12) << "|" << setw(16) << FieldsForSpisok[i].TypeOfElement << setw(3) << "|" << setw(12) << FieldsForSpisok[i].temperature << setw(10) << "|" << setw(8) << FieldsForSpisok[i].speed << "|\n";


    }
    cout << "------------------------------------------------------------------------------\n"; //________________________________________________________________________ 
    cout << "Type Of Element: 'Ч'- чистое вещество, 'М'- масло\n";

#ifndef DEBUG
    cout << "Name of current file and function" << endl << endl;
    cout << __FILE__ << endl;
    cout << __FUNCTION__ << endl << endl;

#endif
    return 6;
#endif
}