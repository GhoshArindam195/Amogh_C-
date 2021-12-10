#include<iostream>
#include<stack>

using namespace std;

int main(void)
{
    stack<int> stk1;

    stk1.push(100);
    stk1.push(200);
    stk1.push(300);
    stk1.push(775);
    stk1.push(9999);

    // int n = stk1.top();
    // cout<<n<<endl;
    // stk1.pop();
    // n = stk1.top();
    // cout<<n<<endl;
    // stk1.pop();


    while(!stk1.empty())
    {
        cout<<stk1.top()<<endl;
        stk1.pop();
    }

    cout<<stk1.size();


}
