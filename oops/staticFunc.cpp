#include<iostream>
using namespace std;

class Test
{
    private:
        int a;
    
    public:
        static int count;
        static int getCount()
        {
            // return count+a;
            count++;
            return count;
        }
};

int Test::count=0;

int main(void)
{
    Test t1;
    cout<<t1.getCount()<<endl;
    cout<<Test::getCount()<<endl;

}