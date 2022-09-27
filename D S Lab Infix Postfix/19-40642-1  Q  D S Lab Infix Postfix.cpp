#include<iostream>
using namespace std;

#define stack_size 10
#define array_size 100

int top= 0;
char stack[stack_size];

void push(char X)
{
    if(top >=  stack_size)cout<<"Overflow! \n";
    else
    {
        stack[top]=X;
        top++;
    }
}

char pop()
{
    char X='!';
    if(top>0)
    {
        top--;
        X=stack[top];
    }
    return X;
}

int priority(char op)
{
    if(op == '+' || op == '-')return 1;
    if(op == '*' || op == '/')return 2;
    if(op=='^')return 3;
    return 0;
}

char topElement()
{
    if(top==0) return '!';
    return stack[top-1];
}

int main()
{

    char infix[array_size], postfix[array_size];
    int n, i=1;
    infix[0]='(';
    //read infix expression
    cout<<"Enter Infix: ";
    char s=' ';
    while( s != '\n')
    {
        cin.get(infix[i]);
        s=infix[i];
        if(s == ' ')continue;
        //cout<< infix[i];
        i++;
    }
    n=i;
    infix[n-1]=')';

    //convert to postfix
    int k=0;
    for(i=0; i<n; i++)
    {
        char t,s=infix[i];
        if(s == '+' || s == '-' || s == '*' || s=='/')
        {
            while(priority(s)<=priority(topElement()))
            {

                postfix[k]=pop();
                k++;
            }
            push(s);

            //CODE
            //check the precedence of top element
            //if precedence is same or more pop else stop
            //push the current operator to stack
        }
        else if(s == '(')
        {

            push(s);
            //CODE
        }
        else if(s == ')')
        {

            {
                while(topElement()!='(')
                    {

                    postfix[k]=pop();
                    k++;
                    }
                    }
            pop();
            //pop from stack until ( is found
            //and add the popped elements to postfix
        }
        else
        {
            postfix[k]=s;
            k++;
            // append the current symbol to postfix
        }
    }



    //print postfix expression
    cout<< "\nPostfix: ";
    for(i=0; i < k ; i++)
    {
        cout<<postfix[i]<<" ";
    }
    cout<< "\n\n";
    return 0;
}
