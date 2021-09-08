#include<iostream>
using namespace std;
class Base  //Abstract class
{
    public:
        void fun1(){cout<<"Fun1 of Base"<<endl;}    //concrete function
        virtual void fun2()=0;  //Abstract/ pure virtual function
};
class Derived : public Base
{
    public:
        void fun2(){cout<<"Fun2 of Derived"<<endl;} //Overridden the pure virtual function of Base class
         
};

int main(void)
{
    Base *p = new Derived();
    p->fun1();
    p->fun2();
}

