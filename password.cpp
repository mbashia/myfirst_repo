#include <iostream>
#include <conio.h>
#include <string>
#include<cstring>
using namespace std;
int main()
{
    int i = 0;

    char ch;
    char pass[30];

    cout << "enter password and press enter:" << endl;
    while (1)
    {
        ch = getch();
        if (ch == 13)
        {
            break;
        }
        else if(ch==8){
            if(i>0){
                i--;
                cout << "\b \b";
            }

        }
        else if(ch==9 || ch==32 ){
            cout << "";
        }
        else{
        
        cout << "*";
        pass[i] = ch;
        i++;
        }
       
    }
    pass[i]='\0';
    
    
    if(strlen(pass)==0){
        cout << "you have not entered any password stupid boy";
    }
    else{
    cout << endl;
    cout << "your password is:" << pass;
}
} 