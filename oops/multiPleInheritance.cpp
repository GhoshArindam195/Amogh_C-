#include<iostream>
using namespace std;
class P1
{
    public:
        void tell()
        {
            cout<<"main P1 hoon\n";
        }
};

class P2
{
    public:
        void tell()
        {
            cout<<"main P2 hoon\n";
        }
};

class Child : virtual public P1, virtual public P2
{
    public:
        void tell()
        {
            cout<<"main kisi ka bhi tell nahi hoon, main child ka tell hoon\n";
        }
};

int main(void)
{
    Child ob;
    ob.tell();
}