#include<iostream>
using namespace std;
class Complex
{
    int real, img;
    public:
        Complex(int r=0, int i=0)
        {
            real=r;
            img=i;
        }

        friend ostream &operator<<(ostream &out, Complex &c);
        friend istream &operator>>(istream &in, Complex &c);
};

ostream &operator<<(ostream &out, Complex &c)
{
    out<<c.real;
    out<<"+i"<<c.img<<endl;
    return out;
}

istream &operator>>(istream &in, Complex &c)
{
    cout<<"Enter Real Part";
    in>>c.real;
    cout<<"Enter Imaginary Part";
    in>>c.img;
    return in;
}

int main(void)
{
    Complex c1;
    cin>>c1;
    cout<<"The complex object is ";
    cout<<c1;
}