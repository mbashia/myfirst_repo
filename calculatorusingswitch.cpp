#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout << "enter first operand:";
    cin >> num1;
    cout << "enter second operand:";
    cin >> num2;
    cout << "enter the operation you want(+,-,/,*)";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        // operator is doesn't match any case constant (+, -, *, /)
        cout << "Error! The operator is not correct";
        break;
    }

    return 0;
}
