
//typing effect 
#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

int main()
{
string hello = "Your text goes here";
int x=0;
while ( hello[x] != '\0')
{
	cout << hello[x];
	Sleep(500);
	x++;
};
	return 0;
}