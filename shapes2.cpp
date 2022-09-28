#include <iostream>
#include<time.h>
#include<windows.h>
#include<unistd.h>
using namespace std;
int main()
{
    int rows, space;
    cout << "enter the number of rows:" << endl;
    cin >> rows;
   sleep(2);
    for (int i = rows; i >= 1; i--)
    {
        for (space = 1; space <= (rows - i); space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}