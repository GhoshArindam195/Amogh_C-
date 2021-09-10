#include<iostream>
using namespace std;
class Your;
class My
{
    int a;
    friend Your;
};

class Your
{
    public:
        My ob;
        void fun()
        {
            ob.a=10;
        }

        void show()
        {
            cout<<ob.a<<endl;
        }
};

int main(void)
{
    Your ob;
    ob.fun();
    ob.show();
}