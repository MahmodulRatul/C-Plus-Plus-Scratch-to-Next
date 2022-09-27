//A C++ program to check divisibility between two numbers and check whether number is prime or not.
#include <iostream>
using namespace std;

void divisibility(int a, int b) //The defined operating function
{
    bool isprime=true;
    if (b%a==0) //Divisibility check condition
    {
        cout<<b<<" is divisible by "<<a;
    }
    else if (a%b==0) //Divisibility check condition
    {
        cout<<a<<" is divisible by "<<b;
    }
    else // Prime number check condition
    {
        for (int i = 2; i<=a/2; i++)
            {
                if(a % i==0)
                    {
                        isprime = false;
                        break;
                    }
            }
        if(isprime)
            cout<<"1st number "<<a<<" is a prime number."<<endl;
        else
            cout<<"1st number "<<a<<" is not a prime number."<<endl;
    }
}

int main() // The starter function
{
    int x, y;
    cout<<"Enter the 1st number: ";
    cin>>x; // Taking input
    cout<<"Enter the 2nd number: ";
    cin>>y; // Taking input
    divisibility(x,y); // Calling operating function
    return 0;
}
