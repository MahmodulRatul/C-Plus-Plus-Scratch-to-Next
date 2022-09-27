// A C++ program to build a class named HEIGHT and create 2 object of it.
#include <iostream>

using namespace std;

class height
{
    static int counter;
    public:
    int feet, inch;
    height()
    {
        ++counter;
    }
    showheight()
    {
        cout<<"Height of the "<<counter<<" object is "<<feet<<" feet, "<<inch<<"inch"<<endl;
    }
};
int height :: counter=0;
int main()
{
    height h1;
    h1.feet=5;
    h1.inch=9;
    h1.showheight();
    height h2;
    h2.feet=h1.feet+1;
    h2.inch=h1.inch;
    h2.showheight();
    return 0;
}
