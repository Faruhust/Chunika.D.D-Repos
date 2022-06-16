#include <iostream>  
#include <iomanip>  
#include <string>   
#include <ctime>  
#define N 10  


using namespace std;

int FillFromScreen(int Number1);
int RandomFilling(int Number1);
int Sort(int Number1);
int PrintToTheScreen(int Number1);






struct StructureSpeedInElement {
    string element;
    char TypeOfElement;
    int temperature;
    int speed;
} FieldsForSpisok[N];

int main()
{

    setlocale(LC_ALL, "ru");
    int a = 0;
    int Number1 = 0;
    int theend = 0;
    while (true) {
        cout << "Enter a punkt of menu (number from 1 to 5)" << endl;
        cout << "1. Filling from screen" << endl;
        cout << "2. Random filling" << endl;
        cout << "3. Sorting" << endl;
        cout << "4. Printing" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter a punkt of menu" << endl;
        cout << "->" << endl;
        cin >> a;

        while ((a < 0) || (a > 5))
        {
            cout << "Invalid punkt of menu. Please try again" << endl;
            cout << "->" << endl;
            cin >> a;
        }

        cout << endl;

        if (a == 1)
        {
            cout << "Enter number of elements which you want to fill" << endl;
            cin >> Number1;
            FillFromScreen(Number1);


        }
        else if (a == 2)
        {

            RandomFilling(Number1);
            Number1 = 10;

        }
        else if (a == 3)
        {
            Sort(Number1);

        }
        else if (a == 4)
        {
            PrintToTheScreen(Number1);

        }
        else if (a == 5)
        {
            cout << "Thank you for using our service!" << endl;
            exit(0);
        }
    }
}
int FillFromScreen(int Number1)
{

    string FillingElement;
    char FillingTOE;
    int FillingTemp, FillingSpeed;


    for (int i = 0; i < Number1; i++)

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
    return Number1;

}
int  RandomFilling(int Number1)
{
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

    return 0;
}

int Sort(int Number1)
{
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



    return 0;
}

int PrintToTheScreen(int Number1)
{
    if (Number1 == 0)
    {
        cout << "Elements are empty" << endl;
        return 0;
    }

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

    return 6;
}