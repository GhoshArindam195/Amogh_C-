#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"Base Constructor"<<endl;
        }

        virtual ~Base()
        {
            cout<<"Base Destructor"<<endl;
        }
};
class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"Derived Constructor"<<endl;
        }
};

int main()
{
    // Derived *ob = new Derived();

    Base *ob = new Derived();
    delete ob;

}