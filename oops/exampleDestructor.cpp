#include<iostream>
using namespace std;

class Demo
{
    public:
        int *p;
        Demo()
        {
            cout<<"Demo Object is Successfully created"<<endl;
            p = new int[10];
        }

        
        ~Demo()
        {
            delete []p;
            cout<<"Demo Object is Successfully destroyed"<<endl;
        }
};

int main(void)
{
    Demo *ob = new Demo();
    delete ob;
}