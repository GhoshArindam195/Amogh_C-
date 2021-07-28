#include<iostream>
using namespace std;
struct Student
{
    static int roll;
    string name;
};


int main(void)
{
    Student Amogh, Vivaan;
    Amogh.name="Amogh Shrivastava";
    // Amogh.roll=100;
    Vivaan.name="Vivaan the great";
    cout<<Amogh.name<<endl;
    cout<<Amogh.roll<<endl;
    cout<<Vivaan.name<<endl;
    cout<<Vivaan.roll<<endl;

}
