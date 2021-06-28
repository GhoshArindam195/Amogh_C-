#include<iostream>
using namespace std;

enum dept{CS, ECE, IT, Civil};

int main(void)
{
    dept d;
    d=CS;

    if(d==CS)
    {
        printf("The department is Computer Science");
    }

}