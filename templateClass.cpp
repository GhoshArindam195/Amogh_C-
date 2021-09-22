#include<iostream>
using namespace std;

template<class T>
class Calculation
{
    public:
        T a,b;
        T add();
        T sub();
        T mul();
        T div();
};

template <class T>
T Calculation<T> :: add()
{
    return a+b;
}
template <class T>
T Calculation<T> :: sub()
{
    return a-b;
}
template <class T>
T Calculation<T> :: mul()
{
    return a*b;
}
template <class T>
T Calculation<T> :: div()
{
    return a/b;
}

int main(void)
{
    Calculation<float> ob1;
    ob1.a=10.5;
    ob1.b=5;
    cout<<ob1.add()<<endl;
    cout<<ob1.sub()<<endl;
    cout<<ob1.mul()<<endl;
    cout<<ob1.div()<<endl;
}