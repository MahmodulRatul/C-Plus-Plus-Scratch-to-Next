#include <iostream>
using namespace std;
int x = 7;
    int y = 9;
void swap_point(int *a, int *b)
{
    int *pSwap = a;
    a = b;
    b = pSwap;
    return;
}
int main()
{

    cout <<"Before Swap: " << x << "  " << y << endl;
    swap_point(&x, &y);
    cout <<"After Swap: " << x << "  "<< y << endl;
    return 0;
}
