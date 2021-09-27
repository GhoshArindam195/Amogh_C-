#include<iostream>
using namespace std;

class A
{
    public: 
        int a;
        void change() const 
        {
            // a++;     //Not Allowed   
            cout<<a<<endl;
        }
};

int main(void)
{
    A ob;
    ob.a=100;
    ob.change();
}