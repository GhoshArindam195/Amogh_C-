#include<iostream>
#include<sstream>
using namespace std;
int main(void)
{
    string s="12345";
    typedef stringstream ss;
    ss ob(s);

    int convartedVal=0;
    ob>>convartedVal;
    cout<<convartedVal;
}