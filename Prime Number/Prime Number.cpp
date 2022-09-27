#include <iostream>
using namespace std;

int main() {

    int num=2, upto, sum=0, i;
    bool isPrime = true;

    cout << "Enter the number up to which you want to find prime numbers :  ";
    cin >> upto;

    cout << "\nPrime numbers till " << upto << " are: ";
    while(num <= upto)
    {
        isPrime = true;

            for (i = 2; i <= num / 2; ++i)
            {
                if (num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }

        if (isPrime == true)
            cout << num << " ";
            if (isPrime)
            {
            sum = sum + num;
            }
            ++num;
    }
    cout<<endl<<"Sum of the prime numbers : "<<sum;
    return 0;
}
