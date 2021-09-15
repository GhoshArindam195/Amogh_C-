#include<iostream>
using namespace std;

class Outer
{
    public:
        // int a;
        static int b;

        void fun()
        { 
            ob.x=100;
            cout<<ob.show()<<endl;
        }
        class Inner
        {
            public:
                int x;
                int show()
                {
                    cout<<b<<endl;
                    return x;
                }
        };
        Inner ob;
};
int Outer :: b=0;

int main(void)
{
    // Outer :: Inner in;
    // in.x=100;

    Outer ou;
    ou.fun();

}