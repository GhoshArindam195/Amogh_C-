#include<iostream>
using namespace std;

class Rectangle
{
    public :
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main(void)
{
    // Rectangle r;
    // r.length=100;
    // Rectangle *rptr;

    // rptr = &r;

    // // (*rc).breadth=20;
    // // or....
    // rptr->breadth=20;

    // cout<<rptr->area()<<endl;
    // cout<<rptr->perimeter()<<endl;


    //lets make a object in dynamic memory


    Rectangle *ptr = new Rectangle();

    ptr->length=20;
    ptr->breadth=10;

    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

    free(ptr); 
    
}
