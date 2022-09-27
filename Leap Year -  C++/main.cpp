#include <iostream>

using namespace std;

int main()
{ int Year ;
    cout << "Enter Year : " << endl;
    cin>>Year;
    if(Year%4==0)
    {
       if (Year%100==0)
       {
           if (Year%400==0)
           {
               cout << Year << "  is Leap year"<<endl;
           }
           else
            { cout << Year << "  is not Leap year"<<endl;};
       }
       else
        { cout << Year << "  is Leap year"<<endl;};
    }
    else
        {cout << Year << "  is not Leap year"<<endl;};

    return 0;
}
