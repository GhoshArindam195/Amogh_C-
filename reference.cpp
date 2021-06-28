#include<iostream>
using namespace std;
int main(void)
{
    int x=10;
    int &y=x;
    y++;
    cout<<x<<endl;
    int z=100;
    y=z;
    cout<<y<<endl;
}