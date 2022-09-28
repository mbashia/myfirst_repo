
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   
   int sml=1, i, limit;//smileyface has an ascii value of one.first declare a variable lets say sml and initialize 
   //it to 1.then declare another variable of type char lets say ch and initialize it with sml.
   char ch=sml;
   cout<<"How many smiley face you want to print ? ";
   cin>>limit;
   for(i=0; i<limit; i++)
   {
      cout<<ch<<" ";
   }
   getch();
}