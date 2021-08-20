#include<iostream>
using namespace std;
class GrandParent
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    
    void funGrandParent()
    {
        a=10;
        b=20;
        c=30;
    }
};

class Parent : public GrandParent
{
    private:

    protected:
        
    public:
        void funParent()
        {
            //a=100;
            b=200;
            c=300;
        }
};

class Child : public Parent
{
    private:

    protected:
    
    public:
        void funChild()
        {
            //a=1000;
            b=2000;
            c=3000;
        }
};

int main(void)
{
    Child ob;
    //ob.a=1000;
    //ob.b=2000;
    ob.c=3000;
}