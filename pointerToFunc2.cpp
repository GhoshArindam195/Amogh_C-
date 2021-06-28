#include<iostream>
using namespace std;

int max(int a, int b)
{
    return a>b?a:b;
}
int min(int a, int b)
{
    return a<b?a:b;
}
int main(void)
{
   int (*fp)(int, int); //Function pointer declaration
   fp=max;  //initialization
   cout<<(*fp)(10, 20)<<endl;   //calling
   fp=min;
   cout<<(*fp)(10, 20)<<endl;
}