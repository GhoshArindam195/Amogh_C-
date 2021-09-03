#include<iostream>
using namespace std;
class BasicCar
{
    public:

    void statrtEngine()
    {
        cout<<"Starting the car."<<endl;
    }
    void blowBorn()
    {
        cout<<"Honk! Honk!"<<endl;
    }

    void drive()
    {
        cout<<"Driving"<<endl;
    }
};

class Luxary : public BasicCar
{
    public:
    void playMusic()
    {
        cout<<"Playing music!!"<<endl;
    }
    void startAC()
    {
        cout<<"Adjusting the temperature"<<endl;
    }
};

int main(void)
{
    BasicCar *basicDriver;

    // basicDriver = new Luxary();

    // Luxary *audi = new Luxary(); //Dynamic Object creation
    Luxary audi;    //Static Object creation
    basicDriver = &audi;

    basicDriver->statrtEngine();
    basicDriver->drive();
    basicDriver->blowBorn();

    // basicDriver->playMusic();
    // basicDriver->startAC();


    // Luxary *audi = new BasicCar();   //Error.........


}

