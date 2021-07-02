#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(void)
{
    int num=12345;

    //Method1.....
    // typedef ostringstream oss;
    // oss ob;

    // ob<<num;

    // string convertedString = ob.str();

    //Method2..............
    string convertedString=to_string(num);

    cout<<convertedString<<endl;
    cout<<convertedString.length();
}