#include <iostream>
using namespace std;
#define SIZE 500
template<class T>
class Queue
{
    public:
    T container[SIZE];
    int rear=0;

    void push(T x)
    {
        if(!isFull())
        {
            container[rear++] = x;
        }
    }
    bool isFull()
    {
        if (rear == SIZE) return true;
        else return false;
    }
    bool isEmpty()
    {
        if(rear==0) return true;
        else return false;

    }
    T getRear()
    {
        return container[rear-1];
    }
    T getFront()
    {
        return container[0];
    }
    void pop()
    {

       for(int i=0; i<rear;i++)
        {
            container[i] = container[i+1];
        }
        rear--;


    }
    void showAll()
    {
        for(int i=0; i<rear;i++)
        {
            cout << container[i] << " ";
        }
    }

};
int main()
{
   Queue <int> q;
   for(int i=0; i<10;i++)
   {
       q.push(i+1);
   }
   //q.showAll();
   for(int i=0; i<10;i++)
   {
       cout << q.getFront() << " ";
       q.pop();
   }

}
