#include<iostream>
using namespace std;

class Test
{
    private:
        int a, b;
    
    public:
        static int count;
    Test()
    {
        a=10;
        b=10;
        count++;
    }
};

int Test::count=0;

int main(void)
{
    Test t1;
    Test t2;
    Test t3;
    Test t4;
    Test t5;

    // cout<<t1.count<<endl;
    // cout<<t2.count<<endl;
    cout<<Test::count<<endl;

}