#include<iostream>
#include<deque>

using namespace std;

int main(void)
{
    deque<int> dq = {1,2,3,4};
    deque<int> dq1;

    dq1.assign(dq.begin(), dq.end());

    // deque<int>:: iterator itr = dq1.begin();
    // while(itr!=dq1.end())
    // {
    //     cout<<*itr<<endl;
    //     itr++;
    // }

    // deque<int> dq2;
    // dq2.assign(5, 6);
    // deque<int>:: iterator itr = dq2.begin();
    // while(itr!=dq2.end())
    // {
    //     cout<<*itr<<endl;
    //     itr++;
    // }

    deque<int> dq3={1,2,3};
    deque<int>:: iterator itr = dq3.begin();
    dq3.insert(itr, 50);
    itr = dq3.begin();
    while(itr!=dq3.end())
    {
        cout<<*itr<<endl;
        itr++;
    }

    dq3.clear();
    cout<<dq3.size()<<endl;




}
