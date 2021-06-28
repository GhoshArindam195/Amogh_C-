#include<iostream>
using namespace std;

void display(string s)
{
    cout<<"Hello "<<s<<", welcome to the CPP world!"<<endl;
}
int main(void)
{
   void (*fp)(string);
   fp=display;
   (*fp)("Arindam");
}