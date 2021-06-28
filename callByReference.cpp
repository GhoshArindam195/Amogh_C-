#include<iostream>
using namespace std;
void swap(int &p, int &q)
{
    int temp=p;
    p=q;
    q=temp;
}
int main(void)
{
    int x,y;
    cin>>x>>y;

    cout<<"before swapping"<<endl;
    cout<<"X="<<x<<" Y="<<y;
    swap(x, y);
    cout<<"\nAfter swapping"<<endl;
    cout<<"X="<<x<<" Y="<<y;
}