#include <iostream>
#include<conio.h>
using namespace std;
void print(int rowsss){
    for (int i = 1; i <= rowsss;i++)
    {for(int j = 1; j <= i;j++){
            cout << "*";
    }
    cout<<"\n";
    }

}
int main(){
    int rows;
    cout<<"enter the number of rows:";
    cin>>rows;
    cout << "printing pattern..." << endl;
    getch();
        print(rows);
    system("color B");
}