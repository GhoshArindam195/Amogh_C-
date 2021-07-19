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

        int perimeter();

        Rectangle(int l, int b);    // param constructor
        Rectangle() //no param constructor
        {
            length=0;
            breadth=0;
        }

};

int Rectangle :: perimeter()
{
    return 2*(length+breadth);
}

Rectangle :: Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}

int main()
{
    Rectangle r1;
    Rectangle r2(10, 5);
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
}



