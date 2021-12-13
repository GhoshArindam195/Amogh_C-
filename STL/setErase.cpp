#include<iostream>
#include<set>
using namespace std;
int main(void)
{
    set<int> myset;
    set<int>::iterator itr;

    myset={10, 20, 30};

    cout<<"Before Erasing"<<endl;
    for(itr=myset.begin(); itr!=myset.end(); itr++)
        cout<<*itr<<endl;

    myset.erase(20);

    cout<<"After erasing"<<endl;
    for(itr=myset.begin(); itr!=myset.end(); itr++)
        cout<<*itr<<endl;


}
