#include <iostream>
#include <list>
using namespace std;


int main(void)
{
    list<int> l1 = {9, 10, 11};
    list<int> l2 = {5, 6, 7, 15};

    // l1.splice(l1.begin(), l2);

    // cout<<l2.size();


    //Unique.......
    list<int> l3 = {9, 9, 10,10,10, 11, 11, 10,10, 11, 10};
    l3.unique();
    list<int> :: iterator itr = l3.begin();
    while(itr!=l3.end())
    {
        cout<<*itr<<endl;
        itr++;
    }

}