#include<iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout<<"This is fun of First namespace"<<endl;
    }
};

namespace Second
{
    void fun()
    {
        cout<<"This is fun of Second namespace"<<endl; 
    }
};
using namespace First;
int main()
{
    fun();
    Second::fun();
}