#include<iostream>
using namespace std;

/*
enum season
{
    Spring=1,
    Summer=4,
    Autumn=8,
    Winter=11
};
*/

/*
enum days
{
    Sunday=1,
    Monday,
    Tuesday,
    Wednessday,
    Thrusday,
    Friday,
    Saturday
};
*/

/*
enum boolean{
    False,
    True
};
*/

enum Gender{Male, Female};
int main(void)
{
    Gender gender = Male;
    switch (gender)
    {
        case Male:
            cout<<"Gender is Male";
            break;
        default:
            cout<<"Gender is Female";
    }
}