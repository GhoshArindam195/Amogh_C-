#include<iostream>
#include<set>
using namespace std;
int main(void)
{
    set<int> set1;

    set1.insert(10);
    set1.insert(20);
    set1.insert(5);
    set1.insert(50);
    set1.insert(7);
    set1.insert(1);
    set1.insert(20);

    for(auto it = set1.begin(); it!=set1.end(); it++)
    {
        cout<<*it<<endl;
    }

    set<string> set2;

    set2.insert("Amogh");
    set2.insert("Arindam");
    set2.insert("Bibek");
    set2.insert("Srijit");
    set2.insert("Vivan");
    set2.insert("Gayatri");

    for(auto it = set2.begin(); it!=set2.end(); it++)
    {
        cout<<*it<<endl;
    }



}