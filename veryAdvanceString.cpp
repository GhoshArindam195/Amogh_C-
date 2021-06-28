#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Push_back............
    string str="ABCDE";
    string res="";
    // for(int i=0; i<str.length(); i++)
    //     res+=str.at(i);
    // cout<<res<<endl;

    for(int i=str.length()-1; i>=0; i--)
        res.push_back(str.at(i));
    cout<<res<<endl;


}