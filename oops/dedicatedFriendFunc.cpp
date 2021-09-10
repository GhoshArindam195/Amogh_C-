#include<iostream>
using namespace std;
class Test
{
    int a;
    protected : int b;
    public : int c;

    friend Test assign();
};

Test assign()
{
    Test t;
    t.a=10;
    t.b=20;
    t.c=30;
    return t;
}


int main(void)
{
    Test ob = assign();
    cout<<ob.c;
}