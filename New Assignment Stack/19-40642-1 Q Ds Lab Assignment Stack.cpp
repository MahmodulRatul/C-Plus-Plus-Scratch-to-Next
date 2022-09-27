#include<bits/stdc++.h>
using namespace std;

class StackNode {
    public:
    int data;
    StackNode *next;
    StackNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack {
    StackNode *top;

    public:
    void push(int data)
    {
        if (top == NULL) {
            top = new StackNode(data);
            return;
        }
        StackNode *s = new StackNode(data);
        s->next = top;
        top = s;
    }
    StackNode* pop()
    {
        StackNode *s = top;
        top = top->next;
        return s;
    }
    void display()
    {
        StackNode *s = top;
        while (s != NULL) {
            cout << s->data << " ";
            s = s->next;
        }
        cout << endl;
    }
    void reverse()
    {
        StackNode *prev, *cur, *succ;
        cur = prev = top;
        cur = cur->next;
        prev->next = NULL;
        while (cur != NULL) {
            succ = cur->next;
            cur->next = prev;
            prev = cur;
            cur = succ;
        }
        top = prev;}};
int main()
{
    Stack *s = new Stack();
    int choice;
    while(1){cout<<"Perform some operations on a stack " <<endl;
    cout<<"\n0)Exit 1)Push 2)Pop 3)Reverse 4)Display \n Enter Option: ";
    cin >>choice;
    switch (choice){
    case 0:return 0;
    break;
    case 1:{for(int i=1;i<=10;i++){cout<<"push : ";cout<<"\n";int element;cin>>element;s->push(element);}cout << "Original Stack :  ";s->display();}
    break;
    case 2: s->pop();s->display();
    break;
    case 3: s->reverse();cout << "Reversed Stack" << endl;s->display();
    break;
    case 4: s->display();
    break;
    default:cout<<"Wrong Input"<<endl;}}
    return 0;
}
