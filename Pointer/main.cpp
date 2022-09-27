#include <iostream>

using namespace std;

int main()
{
    int g, *x, *y;
    g=5;
    x=&g;
    y=&x;
    cout << x<<y<<g<< endl;
    *x=10;
    cout << *x<<*y<<g<< endl;
    *y=20;
    cout << **x<<*y<<g<< endl;
    return 0;
}
