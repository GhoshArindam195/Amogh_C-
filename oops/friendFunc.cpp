#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;    

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    friend Complex operator+(Complex temp1, Complex temp2);
};
Complex operator+(Complex temp1, Complex temp2)
{
    Complex c3(temp1.real + temp2.real, temp1.img + temp2.img);
    return c3;
}

int main(void)
{
    Complex c1(3, 7), c2(5, 4);
    // Complex c3 = c2.add(c1);

    Complex c3 = c1 + c2;

    // cout << c3.real << '+' << c3.img << 'i';
}