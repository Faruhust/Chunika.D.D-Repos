#include <iostream>
using namespace std;

int main()
{
    int a, b, c, p, S;
    a = 15;
    b = 72;
    c = 41;
    p = (a + b + c) / 2;
    S = cbrt(p * (p + a) * (p + b) * (p + c));
    return 0;

}
