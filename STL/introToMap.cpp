#include<iostream>
#include<map>

using namespace std;

int main(void)
{
    map<int, string> m;
    m[1] = "Amogh";
    m[100] = "Srijit";
    m[274] = "Arindam";
    m.insert({13, "Toto"});
    
    cout<<"Is key 1 present? "<<m.count(1)<<endl;

    m.erase(1);

    for(auto ob : m)
    {
        cout<<ob.first<<" -> "<<ob.second<<endl;
    }

    auto val = m.find(100);

    cout<<(*val).first<<" -> "<<(*val).second<<endl;
}
