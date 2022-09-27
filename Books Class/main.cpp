#include<iostream>
using namespace std;

class Author //first base class
{
private:
    string authorName;
    int authorID; // all these are private members

protected:
    //member function to show Author's details
    void setAuthorName();
    void setAuthorID();
    void showAuthorName();
    void showAuthorID();
};

class Publisher //second base class
{
private:
    string pubName;
    int pubID, ISBNNumber; // all these are private members

protected:
    //member function to show Publisher's details
    void setpubName();
    void setpubID();
    void setISBNNumber();
    void showpubName();
    void showpubID();
    void showISBNNumber();
};

class Book:public Author, public Publisher //one child class
{
public:
    //member function to show Book's details
    string bookName;
    int bookID, publishYear; // all these are public members
    void createBook();
    void showBook();
    Book() // this is constructor
    {
         cout<<"Book has been created"<<endl;
         };
} ;

void Author::setAuthorName()
{
    cin>>authorName;
}

void Author::setAuthorID()
{
    cin>>authorID;
}

void Author::showAuthorName()
{
    cout<<authorName<<endl;
}

void Author::showAuthorID()
{
    cout<<authorID<<endl;
}

void Publisher::setpubName()
{
    cin>>pubName;
}

void Publisher::setpubID()
{
    cin>>pubID;
}

void Publisher::setISBNNumber()
{
    cin>>ISBNNumber;
}

void Publisher::showpubName()
{
    cout<<pubName<<endl;
}

void Publisher::showpubID()
{
    cout<<pubID<<endl;
}

void Publisher::showISBNNumber()
{
    cout<<ISBNNumber<<endl;
}
//member function definition, outside of the class
void Book::createBook()
{
    cout<<"Book Name : ";
    cin>>bookName;
    cout<<"Book ID : ";
    cin>>bookID;
    cout<<"Publisher Year : ";
    cin>>publishYear;
    cout<<"Author Name : ";
    setAuthorName();
    cout<<"Author ID : ";
    setAuthorID();
    cout<<"Publisher Name : ";
    setpubName();
    cout<<"Publisher ID : ";
    setpubID();
    cout<<"ISBN Number : ";
    setISBNNumber();
}
//member function definition, outside of the class
void Book::showBook()
{
    cout<<"Book Name : "<<bookName<<endl;
    cout<<"Book ID : "<<bookID<<endl;
    cout<<"Publisher Year : "<<publishYear<<endl;
    cout<<"Author Name : ";
    showAuthorName();
    cout<<"Author ID : ";
    showAuthorID();
    cout<<"Publisher Name : ";
    showpubName();
    cout<<"Publisher ID : ";
    showpubID();
    cout<<"ISBN Number : ";
    showISBNNumber();
}

int main()
{
    int N;
    cout<<"How many books user wants to create : ";
    cin>>N;
    for(int i = 1; i <= N; i++)
    {
        Book book;  ///Object is created of Book class
        book.createBook();
        for(int i = 1; i <= 20; i++) if(i&1) cout<<"**"; else cout<<"**";
        cout<<"\n\nBook Details : \n";
        book.showBook();

    return 0;
}}
