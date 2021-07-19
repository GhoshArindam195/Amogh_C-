#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

    public:
        Rectangle() //No param constructor
        {
            length=0;
            breadth=0;
        }

        Rectangle(int l, int b) // param constructor
        {
            length=l;
            breadth=b;
        } 

        Rectangle(Rectangle &rect)  //copy
        {
            length=rect.length;
            breadth=rect.breadth; 
        }

        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
};

int main()
{
    Rectangle r1(10, 5);
    Rectangle r2;
    Rectangle r3(r1);

    cout<<r2.getLength()<<" "<<r2.getBreadth()<<endl;
    cout<<r3.getLength()<<" "<<r3.getBreadth()<<endl;

}