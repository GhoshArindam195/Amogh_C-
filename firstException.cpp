#include<iostream>
using namespace std;

float divide(int divident, int divisor)
{
       if(divisor==0)
            throw 404;
        return (float)divident/divisor;
}

int main(void)
{
    int x, y;
    float z;
    cout<<"Enter Dividend"<<endl;
    cin>>x;
    cout<<"Enter Divisor"<<endl;
    cin>>y;
    try
    {
        cout<<divide(x, y);
    }
    catch(int e)
    {
        cout<<"Papa ko bolo, Maths ki classes lagaye..Can't divide by ZERO\nBye bye!"<<endl;
    }
}