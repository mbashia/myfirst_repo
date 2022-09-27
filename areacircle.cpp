#include<iostream>
using namespace std;
class circle{
    private:
        float area;
        public:
       void setArea(int radius){
           area = 3.142 * radius * radius;

       }
       float getArea(){
           return area;
       }

};

int main (){
    int r;
    cout << "enter the radius:";
    cin >> r;

    circle ball;
    ball.setArea(r);
    cout<<"the area of the circle is:"<<ball.getArea()<<endl;
}