#include<iostream>
#include<deque>
using namespace std;
int main(void)
{
    deque<char> c = {'A', 'm', 'o', 'g', 'h'};
    deque<char> :: reverse_iterator ritr;

    for(ritr=c.rbegin(); ritr!=c.rend(); ritr++)
    {
        cout<<*ritr;
    }

}