#include<iostream>
using namespace std;

int x=10;   //Global scope
int main()
{
    int x=20;   //Local Scope
    
    {   //Block scope
        int x=30;
        cout<<x<<endl;  //30
    }

    cout<<x<<endl;
    cout<<::x<<endl;

}