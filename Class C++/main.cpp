#include <iostream>

using namespace std;
class Classseven
{   public:
    string Title;string Author;int ID;
};
int main()
{int n,i;
Classseven exhibitBooks;
cout << "How Many Books Do You Want :";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"  Book :" <<i<<endl;

cout<<"   Book's Title :";
cin>>exhibitBooks.Title;
cout<<"   Book's Author :";
cin>>exhibitBooks.Author;
cout<<"   Book Id :";
cin>>exhibitBooks.ID;
}
for(i=1;i<=n;i++)
{cout<<"  Book :" <<i<<endl;
cout<<"The Title Of The Book :"<<exhibitBooks.Title<<endl;
cout<<"The Author Of The Book :"<<exhibitBooks.Author<<endl;
cout<<"The ID Of The Book :"<<exhibitBooks.ID<<endl;
}
    return 0;
}
