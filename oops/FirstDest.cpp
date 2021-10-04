#include<iostream>
using namespace std;

class Test
{
    public:
        Test()
        {
            cout<<"Test object is craeted..."<<endl;
        }
        
        ~Test()
        {
            cout<<"Test object is deleted Successfully..."<<endl;
        }
};

int main(void)
{
    // Test t1;

    Test *t1 = new Test();
    

}