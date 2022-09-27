#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
    int max=0,min=0,avg=0,count=0,n;
    cout<<" input positive integers : ";

   for(;1;)
       {
            cin>>n;
            if (n==-1)
            {
                break;
            }
            else
            {
                count++;
                if(n>max)
                {
                    max=n;
                }
                else{max=max;}
                min=max;
                if(n<min)
                {
                    min=n;
                }
                else{min=min;}
                avg=avg+n;
                avg=avg/count;
            }
            cout<<"Count : "<<count<<endl;
            cout<<"Max : "<<max<<endl;
            cout<<"Min: "<<min<<endl;
            cout<<"Avg : "<<avg<<endl;
       }
}
