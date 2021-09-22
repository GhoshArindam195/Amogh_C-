#include<iostream>
using namespace std;
class AmoghException : public exception
{
    public:
        string what()
        {
            return "This is a C++ Amogh Exception";
        }
};

void fun() throw (AmoghException)
{
    throw AmoghException();
}

int main(void)
{
    try
    {
        fun();
    }
    catch(AmoghException e)
    {
        cout<<e.what()<<endl;
    }
}