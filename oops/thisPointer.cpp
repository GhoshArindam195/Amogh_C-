#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

    public:
        int area()
        {
            return length*breadth;
        }

        Rectangle() //no param constructor
        {
            length=0;
            breadth=0;
        }

        Rectangle(int length, int breadth) //param constructor
        {
            this->length=length;
            this->breadth=breadth;
        }

};

int main()
{
    Rectangle r1;
    Rectangle r2(10, 5);
    cout<<r2.area()<<endl;
}