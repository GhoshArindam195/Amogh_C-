#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    list<string> friends{"Amogh", "Vivan", "Nishank", "Arindam"};

    // friends.erase(friends.end());

    list<string> :: iterator itr = friends.begin();
    int i=0;
    while(itr!=friends.end())
    {
        cout<<*itr<<endl;
        itr++;
    }
    // cout<<friends.size();


    // for (string frnd : friends)
    // {
    //     cout << frnd << " ";
    // }

//     vector<int> emp;
//     cout << emp.empty() << endl;
}