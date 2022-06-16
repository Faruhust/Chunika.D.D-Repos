#include <iostream>
using namespace std;

long long int found(long long int a, long long int max);

int main()
{
    long long int a;
    long long int max = 0;
    cout << "enter a number = " << std::endl;
    cin >> a;
    found(a, max);


}
long long   int found(long long int a, long long int max) {
    if (a == 0) {
        cout << "result is= " << max;
        return max;
    }


    if (a != 0) {
        if (a % 10 > max) {
            max = a % 10;
        }
        else a = a / 10;
        found(a, max);
    }

}
