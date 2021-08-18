#include<iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"Non param constructor of Base"<<endl;
        }
        Base(int x)
        {
            cout<<"Param constructor of Base "<<x<<endl;
        }
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"Non param constructor of Derived"<<endl;
        }
        Derived(int a)
        {
            cout<<"Param constructor of Derived"<<a<<endl;
        }
        Derived(int a, int amogh) : Base(amogh) 
        {
            cout<<"Param constructor of Derived "<<a<<endl;
        }
};

int main(void)
{
    // Derived d1;
    // Derived d2(10);
    Derived d3(10, 100);
}