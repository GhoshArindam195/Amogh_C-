#include<iostream>
using namespace std;
class Vehicle
{
    public:
        string brand="Ford";
        void honk()
        {
            cout<<"Hoom Hoom!\n";
        }
};

class Car : public Vehicle
{
    public:
        string model="Eco Sport";
};

int main(void)
{
    Car myCar;
    myCar.honk();
    cout<<myCar.brand+" "+myCar.model;

}