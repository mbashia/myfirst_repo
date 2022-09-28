#include<iostream>
using namespace std;
int main   (){
    int i, myarray[4], sum = 0, average;
    for (i = 0; i < 4;i++){
        cout <<i+1<<"."<< "enter number:";
        cin >> myarray[i];
        sum = sum + myarray[i];
    }
    cout << "sum is equal to:"<<sum;
    average = sum / i;
    cout <<endl<< "average is equal to:"<<average;
}