#include <iostream>
#include <list>
using namespace std;

bool comparision(int first, int second)
{
    bool flag;
    flag = first>second;
    return flag;
}

int main(void)
{
    list<int> l1 = {9, 10, 11};
    list<int> l2 = {5, 6, 7, 15};

    l1.merge(l2, comparision);

    list<int> :: iterator itr = l1.begin();
    while(itr!=l1.end())
    {
        cout<<*itr<<endl;
        itr++;
    }
}