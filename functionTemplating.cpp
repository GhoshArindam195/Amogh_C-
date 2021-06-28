#include<iostream>
using namespace std;

template <class Amogh>
Amogh getMax(Amogh n1, Amogh n2)
{
    return n1>n2?n1:n2;
}

int main(void)
{
    cout<<getMax(10, 5)<<endl;
    cout<<getMax(10.5f, 6.9f)<<endl;
}