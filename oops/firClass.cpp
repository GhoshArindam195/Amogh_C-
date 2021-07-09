#include<iostream>
using namespace std;\
// basically In C++ every properties inside a class has the PRIVATE accessibility. So that we can't access anything even using a object of the class itself.
class Rectangle
{
        int length;
        int breadth;

    public:
        void setLengthAndBreadth(int len, int breadt) //setter
        {
            length=len;
            breadth=breadt;
        }

        int getLength() //getter
        {
            return length;
        }

        int getBredth() //getter
        {
            return breadth;
        }

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
    Rectangle arin, amogh;
    // arin.length=10; arin.breadth=20;
    // amogh.length=20; amogh.breadth=50;

    arin.setLengthAndBreadth(10, 20);   //Initializing private variables of arin using setters
    amogh.setLengthAndBreadth(20, 50);  //Initializing private variables of arin using setters

    cout<<arin.area()<<endl;
    cout<<amogh.area()<<endl;
    
    cout<<arin.perimeter()<<endl;
    cout<<amogh.perimeter()<<endl;

    cout<<sizeof(arin)<<endl;
    cout<<sizeof(amogh)<<endl;

}