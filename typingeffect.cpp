#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
void typestring(string);
int main(){
    string str = "my name is victor mbashia";
     cout<< typestring(str);
}
void typestring(string){
    string str;
    for(int i = 0; i < str.length(); i++) 
    cout << str[i]; 

}