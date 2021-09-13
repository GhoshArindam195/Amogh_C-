#include<iostream>
using namespace std;

class Admission
{
    public:
        int rollNo;
        static int ticketNo;

    Admission()
    {
        ticketNo++;
        rollNo=ticketNo;
    }
};

int Admission::ticketNo=0;

int main(void)
{
    Admission s1, s2;
    cout<<s1.rollNo<<endl;
    cout<<s2.rollNo<<endl;
}