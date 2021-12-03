#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> friends{"Amogh", "Vivan", "Nishank", "Arindam"};

    // friends.erase(friends.begin() + 1);

    friends.erase(friends.begin()+1, friends.begin()+3);


    for (string frnd : friends)
    {
        cout << frnd << " ";
    }

    vector<int> emp;
    cout << emp.empty() << endl;
}