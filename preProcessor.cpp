#include<iostream>
// #define pi 3.14
#define c cout
// #define i int
#define add(x) (x+x)
#define msg(x) #x

#ifndef pi, i
    #define pi 3.1425
    #define i int
#endif

using namespace std;
int main(void)
{
    // i a=10;
    // c<<a<<endl;
    // c<<pi<<endl;
    // c<<add(10)*add(10)<<endl;

    cout<<msg(H);
}