#include<iostream>
using namespace std;

#define stack_size 10
int top= 0;
char stack[stack_size];

void push(char X){
    if(top >= stack_size)cout<<"Overflow! \n";
    else{
        stack[top]=X;
        top++;
    }
}
char pop(){
    char X;
    if(top==0){
        cout<<"Underflow!\n";
                return X;
    }
    else {
        top--;
        X=stack[top];
    }
    return X;
}
void display(){
    for(int i =top-1;i>=0;i--)
{
 cout <<"value in array : "<<stack[i]<<endl;
}
    //define display to print all the elements in the stack
}
int main(){
    int choice;
    while(1){
        cout<<"\n0)Exit 1)Push 2)Pop 3)Display\nOption: ";
        cin>> choice;
        if(choice==0)return 0;
        else if(choice == 1){
            char element;
            cin >>element;
            push(element);
            //input element and call push function
        }
        else if(choice == 2){
            char v;
             v=pop();
             cout<<v<<endl;
        }
            //call pop here and assign the returned value to v
            //and show the popped value

        else if(choice == 3){
                display();

            //call display here to show all elements in the stack
        }
        else cout<<"Wrong option!\n\n";
    }
    return 0;
}
