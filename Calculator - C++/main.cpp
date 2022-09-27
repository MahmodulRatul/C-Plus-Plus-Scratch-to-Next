// Program to built a simple calculator using switch Statement
#include <iostream>
using namespace std;
int main()
{
    char  operation;
    int num1, num2;

    cout << "Enter an operation (+, -, *, /,%): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (operation)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1/num2;
            break;
        case '%':
            cout << num1 << " %" << num2 << " = " << num1%num2;
            break;

        default:
            cout << " Syntax Error !";
            break;
    }
}
