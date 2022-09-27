#include<iostream>
using namespace std ;
class Box
{
    public: double length;
    void setwidth(double w)
    {
        width=w;
    }
    double getwidth(void)
    {
        return width;
    }
    private:double width;
};
int main()
{
    Box Box1; Box Box2;
    cout<<"Box1:"<<endl;
    cout<<"Enter Length:";
    cin>>Box1.length;
    cout<<"Enter width:";
    cin>>Box1.setwidth(w);

    cout<<"Box2:"<<endl;

    cout<<"Enter Length:";
    cin>>Box2.length;
    cout<<"Enter width:";
    cin>>Box2.setwidth;
    cout<<"Length of 1st Box:"<<Box1.length<<endl;
    cout<<"Width of 1st Box:"<<Box1.getwidth<<endl;
    cout<<"Area of 1st Box:"<<Box1.getwidth*Box1.length<<endl;

    cout<<"Length of 2nd Box:"<<Box2.length<<endl;
    cout<<"Width of 2nd Box:"<<Box2.getwidth<<endl;
    cout<<"Area of 2nd Box:"<<Box2.getwidth*Box2.length<<endl;
}
