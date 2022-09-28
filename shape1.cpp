#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int rows, space;
    cout << "drawing centered star pattern" << endl;

    cout << "enter number of rows:";
    cin >> rows;
    cout << "drawing the pattern now....." << endl;
    getch();
    for (int i = 1; i <= rows; i++)
    {
        for (space = 1; space <= (rows - i); space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "  *  ";
        }
        cout << "\n";
    }
}
