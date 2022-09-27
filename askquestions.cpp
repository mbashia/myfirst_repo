// program that ask questions...
#include <iostream>
#include<string>
using namespace std;
struct questions
{
    string textquestion;
    string option[3];
    int correct;
};
int main()
{

   
    questions quest[3];
    quest[0] = {"which is my favorite car??", {"subaru", "evo", "gt86"}, 2};
    quest[1] = {"which one do i prefer??", {"turbo", "supercharger", "natural aspiration"}, 1};
    quest[2] = {"who is my best driver???", {"dominic toretto", "brian o'conner", "max vesterppen"}, 2};
    for (int i = 0; i < 3; i++)
    {
         int answer;
        cout << quest[i].textquestion << endl;
        cout << "1." << quest[i].option[0] << endl;
        cout << "2." << quest[i].option[1] << endl;
        cout << "3." << quest[i].option[2] << endl;
        cout << "choose between 1 to 3" << endl;
        cin >> answer;
        if (answer == quest[i].correct)
        {
            cout << "correct answer" << endl;
        }
        else
        {
            cout << "wrong answer" << endl;
        }
    }
    //return 0;
}
