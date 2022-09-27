// A C++ Project to simulate online rail ticketing system.
#include <iostream>

using namespace std;

string username, pin, user, p;

void registerAccount()
{
    cout<<"Registration\n";
    bool x=true;bool y=true;
    while(x)
    {
    cout<<"Enter User name excluding Blank Space : ";
    cin>>username;
    if (username.length()<8)
    {
        cout<<"Set a User name with minimum length of 8.";
    }
    else
    {
        username=username;x=false;
    }
    }
    while(y)
    {
    cout<<"Enter Pin number excluding Blank Space: ";
    cin>>pin;
    if (pin.length()<6)
    {
        cout<<"Set a pin with minimum length of 6.";
    }
    else
    {
        pin=pin;y=false;
    }
    }
        cout<<"User Successfully Registered.\n";
    }

bool login()
{
    cout<<"Log In"<<endl;
    cout<<"Enter User Name : ";
    cin>>user;
    cout<<"Enter Pin Number: ";
    cin>>p;
    if(user==username && pin==p)
    {
        cout<<"Log In Successful !!\n";
        return true;
    }
    else
    {
        cout<<"User is not valid !!\n";
        return false;
    }
}

void buyTicket()
{
    int ch,price,totalticket,totalprice;

        cout<< "1) Dhaka to Bhairab Bazar BDT 100\n";
        cout<< "2) Dhaka to Brahmanbaria BDT 120\n";
        cout<< "3) Dhaka to Comilla BDT 150\n";
        cout<< "4) Dhaka to Laksham BDT 180\n";
        cout<< "5) Dhaka to Feni BDT 220\n";
        cout<< "6) Dhaka to Chittagong BDT 250\n";
        cout<< "Enter where you want to go (1/2/3/4/5/6): ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            price=100;
            break;
        case 2:
            price=120;
            break;
        case 3:
            price=150;
            break;
        case 4:
            price=180;
            break;
        case 5:
            price=220;
            break;
        case 6:
            price=250;
            break;
        default:
            cout<< "Wrong Input, Try again\n";
            break;
        }
            cout<<"Enter Number of tickets: ";
            cin>>totalticket;
            totalprice = price * totalticket;
            cout<<"Total Price: "<<totalprice<<" BDT\n";
            cout<<"Enter payment of tickets: "<<totalprice<<" BDT\n"<<endl;
            cout<<"Payment Successful. Thank you for using the system.\n";
}

int main()
{
    bool condition=true;int c;
    cout<<"             Welcome to Online Rail Ticket Buying System            \n";
    cout<<"This Program is processed by MOHAMMAD MAHMODUL KABIR RATUL (AIUB: 19-40642-1)\n";
    cout<<"To use this program, as a user you need to register first. Then log in will appear.\n";
    cout<<"Once you log in successfully, it will show the options to buy ticket.\n\n";
    registerAccount();
    if(login()==true)
    {
        while(condition)
        {
            cout<<"Menu List\n (1) Buy Ticket\n (2) Exit\nEnter Choice: ";
            cin>>c;
            switch(c)
            {
            case 1:
                buyTicket();
                break;
            case 2:
                cout<<"Exiting ... ... ...";
                condition=false;
                break;
            default:
                cout<< "Wrong Input, Try again\n";
                break;
            }
        }
    }
}
