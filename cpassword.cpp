#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int i=0;
    char ch;
    char pwd[30];
    cout << "enter password:";
    while((ch= getch())!=13){// 13 is ascii value for enter
        pwd[i]=ch;
        i++;
        cout << "*";
        
    }
    pwd[i] = '\0';
    cout << "your password is:" <<pwd;
    return 0;
}