#include<iostream>
using namespace std;

class Complex
{
    public:
    int real;
    int img;
    Complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }

    Complex operator+(Complex temp)
    {
        Complex c3(real+temp.real, img+temp.img);
        return c3;
    }
};

int main(void)
{
    Complex c1(3, 7), c2(5, 4);
    // Complex c3 = c2.add(c1);

    Complex c3 = c1+c2;

    cout<<c3.real<<'+'<<c3.img<<'i';
}