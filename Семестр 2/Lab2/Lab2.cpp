#include  "Lab2_Header.h"


int main()
{

    setlocale(LC_ALL, "ru");
    int a = 0;
    int Number1 = 10;
    int theend = 0;
    while (true) {
        cout << endl << "Enter a punkt of menu (number from 1 to 5)" << endl;
#ifdef PRINT_TYPE 
        cout << "1. Random filling" << endl;
#endif
#ifndef PRINT_TYPE 
        cout << "1. Filling from screen" << endl;
#endif
        cout << "2. Sorting" << endl;
        cout << "3. Printing" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter a punkt of menu" << endl;
        cout << "->" << endl;
        cin >> a;

        while ((a < 0) || (a > 4))
        {
            cout << "Invalid punkt of menu. Please try again" << endl;
            cout << "->" << endl;
            cin >> a;
        }

        cout << endl;

        if (a == 1)
        {
#ifdef PRINT_TYPE
            Number1 = 10;
#endif
#ifndef PRINT_TYPE
            Number1 = 3;
#endif
            Filling(Number1);



        }



        else if (a == 2)
        {

            Sort(Number1);

        }
        else if (a == 3)
        {
            PrintToTheScreen(Number1);

        }
        else if (a == 4)
        {
            cout << "Thank you for using our service!" << endl;
            exit(0);
        }
    }

}
