#include <iostream>
#include <list>
using namespace std;

int main(void)
{
    list<string> friends{"Amogh", "Vivan", "Nishank", "Arindam"};

    // friends.erase(friends.end());

    list<string> :: iterator itr = friends.begin();
    int i=0;
    while(i<3)
    {
        cout<<*itr<<endl;
        itr++;
        i++;
    }
    // cout<<friends.size();


    // for (string frnd : friends)
    // {
    //     cout << frnd << " ";
    // }

//     vector<int> emp;
//     cout << emp.empty() << endl;
}