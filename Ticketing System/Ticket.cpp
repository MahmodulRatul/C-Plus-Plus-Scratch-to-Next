#include <iostream>
#include <string>
using namespace std;

class CustomerDetails //1st class
{
protected:
    string cusName;
    string cusTelNum;
    string cusNationalId;
public:
    void setCusName()
    {
        string name;
        cout<<"Customer's name: "<<endl;
        cin>>name;
        cusName=name;
    }
    void setCusTelNum()
    {
        string num;
        cout<<"Customer's phone: "<<endl;
        cin>>num;
        cusTelNum=num;
    }
    void setCusID()
    {
        string id;
        cout<<"Customer's ID no: "<<endl;
        cin>>id;
        cusNationalId=id;
    }
    void displayCusDetails()
    {
    cout<<"Customer's name: "<<cusName<<endl;
    cout<<"Customer's phone: "<<cusTelNum<<endl;
    cout<<"Customer's ID no: "<<cusNationalId<<endl;
    }
};

 class JourneyDetails // 2nd class
 {
 protected: //Attribute
    string travelDate;
    string travelTo;
    string travelFrom;
    int distance;
 public:
    void setTravelDate()
    {
        string date;
        cout<<"Journey Date(DD/MM/YYYY): "<<endl;
        cin>>date;
        travelDate=date;
    }
    void setTravelTo()
    {
        string trTo;
        cout<<"Journey To: "<<endl;
        cin>>trTo;
        travelTo=trTo;
    }
     void setTravelFrom()
    {
        string trFr;
        cout<<"Journey From: "<<endl;
        cin>>trFr;
        travelFrom=trFr;
    }
    int setDistance()
    {
        int d;
        cout<<"Journey Distance: "<<endl;
        cin>>d;
        distance=d;
    }
    void showJourneyDetails()
    {
        cout<<"Journey Date(DD/MM/YYYY): "<<travelDate<<endl;
        cout<<"Journey To: "<<travelTo<<endl;
        cout<<"Journey From: "<<travelFrom<<endl;
        cout<<"Journey Distance: "<<distance<<endl;
    }
 };
class TicketIssue : public JourneyDetails, public CustomerDetails //Inherited Class
{
protected:
    float ticketPrice=5, chrg=0;
public:
    void printTicket()
    {
        displayCusDetails();
        showJourneyDetails();
        cout<<"Per kilometer price = "<<ticketPrice<<" taka"<<endl;
        cout<<"Price before charge applied: " <<distance*ticketPrice<<" taka"<<endl;
        if(distance<100)
        {
            chrg=(distance*ticketPrice*0.2);
            cout<<"After 20% charge applied "<<(distance*ticketPrice)+chrg<<" taka"<<endl;
        }
        else if (distance>100&&distance<200)
        {
            chrg=(distance*ticketPrice*0.1);
            cout<<"After 10% charge applied "<<(distance*ticketPrice)+chrg<<" taka"<<endl;
        }
        else
            cout<<"After 0% charge applied "<<(distance*ticketPrice)<<" taka"<<endl;
    }
};

int main() // Driver code
{
    TicketIssue cus1;
    cus1.setCusName();
    cus1.setCusTelNum();
    cus1.setCusID();
    cus1.setTravelDate();
    cus1.setTravelTo();
    cus1.setTravelFrom();
    cus1.setDistance();
    cus1.printTicket();
cout<<""<<endl;
    TicketIssue cus2;
    cus2.setCusName();
    cus2.setCusTelNum();
    cus2.setCusID();
    cus2.setTravelDate();
    cus2.setTravelTo();
    cus2.setTravelFrom();
    cus2.setDistance();
    cus2.printTicket();
cout<<""<<endl;
    TicketIssue cus3;
    cus3.setCusName();
    cus3.setCusTelNum();
    cus3.setCusID();
    cus3.setTravelDate();
    cus3.setTravelTo();
    cus3.setTravelFrom();
    cus3.setDistance();
    cus3.printTicket();
    return 0;
}
