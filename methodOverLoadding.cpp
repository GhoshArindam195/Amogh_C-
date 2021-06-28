#include<iostream>
using namespace std;
// int add()
// {
    // cout<<"Bhaiya add karne ke liye input dena v zaruri hota hain\nToh please do numbers input dijiye:\n";
    // int a, b;
    // cin>>a>>b;
    // return a+b;
//     return 0;
// }
// int add(int a, int b)
// {
//     return a+b;
// }
// int add(int a, int b, int c)
// {
//     return a+b+c;
// }

int add(int a=0, int b=0, int c=0)  //default arguments
{
    return a+b+c;
}
int main()
{
    int a=10, b=5, c, d;
    cout<<add()<<endl;
    c=add(a, b);
    cout<<c<<endl;
    d=add(a, b, c);
    cout<<d<<endl;
}