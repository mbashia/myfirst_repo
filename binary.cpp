#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num, i, count, bin[100];
    cout << "enter the decimal number you want to convert:";
    cin >> num;
    for (i = 0; num > 0; i++)
    {
        bin[i] = num % 2;
        num = num / 2;
        count++;
    }
    cout << bin[i];
   for (int j = count - 1; j >= 0; j--)
    {
        cout << bin[j];
    }
    getch();

}