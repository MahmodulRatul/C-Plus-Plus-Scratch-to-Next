#include <iostream>
using namespace std;
float MonthlyExpense(float TotalKillo, float CostLitre, float AverageKillo,int Park, int toll)
{
    float Mcost;
    Mcost= (((TotalKillo*30)/AverageKillo)*CostLitre)+(Park*30)+(toll*30);
    return Mcost;
}
int main()
{
    float a,b,c,last;int d,e;
    cout<<"Total killometers driven per day: "<<endl;
    cin>>a;
    cout<<"Cost per litre of  fuel: "<<endl;
    cin>>b;
    cout<<"Average killometers per litre: "<<endl;
    cin>>c;
    cout<<"Parking fees per day: "<<endl;
    cin>>d;
    cout<<"Tolls per day: "<<endl;
    cin>>e;
    last=MonthlyExpense(a,b,c,d,e);
    cout<<"Total Monthly Maintenance cost: "<<last<<endl;
    if (last>10000)
        cout<<" Expense is big! "<< endl;
    else
        cout<<" Expense is OK "<< endl;
    return 0;
}
