#include <iostream>
#include <string>
#include <time.h>
#include <conio.h>
#include <sstream>
using namespace std;

int main()
{
    int cows, bulls, count, calculateCows, num1, num2, num3, num4;
    bool win=false ;
    bool rungame = true;
    char again;
    string secretnum, guess;

    cout << "^^^^^^^^^^^^^welcome to cows and bulls^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << "                !!!!!!!!!!!!!!!!!!!!!!!!                     " << endl;
    while (rungame = true)
    {
        srand(time(NULL));
        num1 = rand() % 10;
        num2 = rand() % 10;
        num3 = rand() % 10;
        num4 = rand() % 10;

        stringstream sso;

        sso << num1 << num2 << num3 << num4;
        sso >> secretnum;
       

        while (win ==0)
        {
            cout << "Enter your guess[xxxx]:";
            cin >> guess;
            bulls = 0;
            cows = 0;
            count = 0;
            calculateCows = 0;

            for (int i = 0; i < secretnum.length(); i++)
            {
                if (guess.at(i) == secretnum.at(i))
                {
                    bulls++;
                }
            }
            for (int j = 0; j < guess.length(); j++)
            {
                int num = secretnum.at(j);
                if (guess.find(num))
                {
                    count++;
                }
            }
            calculateCows = count - bulls;
            cows = (calculateCows < 0) ? 0 : calculateCows;

            cout << "bulls " << bulls<<":" << "cows " << cows << endl;
            if (bulls == 4)
            {
                cout << "''''''''''''''''you win''''''''''''";
                win = true;
            }
            else{
                cows = 0;
                bulls = 0;
                count = 0;
                calculateCows = 0;
            }
        }
        cout << "Do you want to play again [y/n]:" << endl;
        cin >> again;
        rungame=(again=='y')?true:false;

    }
    cout<<"Thanks for playing!"<<endl;
}