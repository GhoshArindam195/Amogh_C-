#include<iostream>
#include<stack>

using namespace std;

int main(void)
{
    stack<int> stk;

    stk.push(24);
    stk.push(100);

    stk.top()+=20;

    cout<<stk.top()<<endl;
}