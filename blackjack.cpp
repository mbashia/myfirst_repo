//black jack game
#include <iostream>
#include <unistd.h>
#include <time.h>
#include <conio.h >
using namespace std;
void showintro()
{
    cout << "\t\t\twelcome to the game of blackjack" << endl;
    cout << "\t\t\tAre you ready to play??" << endl;
    cout << "============================================================================================= " << endl;
}
void timer()
{
    cout << "..";
    sleep(1);
    cout << "..";
    sleep(1);
    cout << "..";
    sleep(1);
    cout << "..";
    sleep(1);
    cout << "..";
    sleep(1);
    cout << "..";
    sleep(1);
    cout << "..";
    sleep(1);
    cout << "..";
    sleep(1);
    cout << "..";
    sleep(1);
    cout << "..";
}
int getCard()
{
    return 1 + rand() % 10;
}
void displayData(int playerTotal, int dealerCard)
{
    cout << "\nyour total is " << playerTotal << endl;
    cout << "the dealer's card face up is " << dealerCard << endl;
}
void learngame(int opt)
{
    switch (opt)
    {
    case 1:
        cout << "read the rules carefully,once you understand them press enter\n";
        getch();
        break;
        case 2:
            break;

    default:
        break;
    }
}
int main()
{
    char pick;
    bool pass;
    bool rungame = true;
    char again;
    bool automaticwin = false;
    int opt;
    showintro();
    cout << "(1)rules\n(2)play" << endl;
    cin >> opt;
    learngame(opt);
     timer();
    while (rungame )
    {
        srand(time(NULL));
        int playerTotal =  getCard() + getCard();
        int dealerCard = getCard();
        int dealerTotal = dealerCard + getCard();
        cout << "\nshuffling cards now ..." << endl;
        sleep(4);
if(playerTotal==21){
    cout << "you win!!!";
    pass = true;
    automaticwin = true;
}
        while (!pass)
        {
            displayData(playerTotal, dealerCard);

            cout << "would you like to hit[h/p]..." << endl;
            cin >> pick;
            if (pick == 'h' || pick == 'H')
            {
                playerTotal += getCard();
                if (playerTotal >= 21)
                {
                    cout << "playerTotal is equal to " << playerTotal << endl;
                    pass = true;
                }
            }
            else if (pick == 'p' || pick == 'P')
            {
                pass = true;
            }
        }
        while(!automaticwin){
        cout << "now it's the dealers turn.." << endl;
        cout << "-\n";
        sleep(1);
        cout << "--\n";
        sleep(1);
        cout << "---\n";
        sleep(1);
        cout << "the deal is done\n";
        cout << "the results are out" << endl;
        break;}
        if (dealerTotal >= 17)
        {
            pass = true;
        }
        else
        {
            dealerTotal = dealerTotal + getCard();
        }
        cout << "the player has " << playerTotal << " the dealer has " << dealerTotal << endl;

        if ((playerTotal < 22) && (playerTotal > dealerTotal) || (dealerTotal > 21) && (playerTotal < 22))
        {
            cout << "you win!!!" << endl;
        }

        else
        {
            cout << "you lose!" << endl;
            system("color 4E");
        }
        cout << "would you like to play again?[y/n]" << endl;
        cin >> again;
        if (again == 'y')
        {
            pass = false;
            system("color 0B");
        }
        else if (again == 'n')
        {
            exit(0);
            system("color 4E");
            rungame = false;
          
        }
        else
        {
            cout << "you have entered a wrong character";
            system("color 4E");
            exit(0);
            rungame = false;
        }
    }
    cout<<"Thank you for playing!"<<endl;
}
