#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    // list<string> friends{"Amogh", "Vivan", "Nishank", "Arindam"};


    // list<string> :: iterator itr = friends.begin();
    // // itr++;
    // // itr++;
    // friends.insert(itr, 10, "Srijit");
    // itr = friends.begin();
    // while(itr!=friends.end())
    // {
    //     cout<<*itr<<endl;
    //     itr++;
    // }


    list<int> l1 = {1, 2, 3, 4, 5};
    list<int> l2 = {6, 7, 8, 9};

    l1.insert(l1.end(), l2.begin(), l2.end());
    l1.pop_back();
    l1.pop_front();
    list<int> :: iterator itr = l1.begin();
    while(itr!=l1.end())
    {
        cout<<*itr<<endl;
        itr++;
    }
}