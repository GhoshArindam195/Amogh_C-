#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> intVec;
    int i;
    cout<<intVec.size()<<endl;
    cout<<sizeof(intVec)<<endl;

    intVec.push_back(100);
    cout<<intVec.size()<<endl;
    cout<<sizeof(intVec)<<endl;

    cout<<intVec[0]<<endl;

    for(int i=0; i<10; i++)
        intVec.push_back(i+1);

    // for(int i=0; i<intVec.size(); i++)
    //     cout<<intVec[i]<<endl;

    //iterator....
    vector<int>::iterator it = intVec.begin();
    while (it != intVec.end())
    {
        cout<<*it<<endl;
        it++;
    }
    

}