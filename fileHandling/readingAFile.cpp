#include<iostream>
#include<fstream>
using namespace std;
int main()
{             
    // ifstream inFile("my.text");
    ifstream inFile;
    inFile.open("my.txt");

    // if(!inFile)
    //     cout<<"Bhaiya, File ko open kiya nahi gaya"<<endl;
    if(!inFile.is_open())
        cout<<"Bhaiya, File ko open kiya nahi gaya"<<endl;
    else
    {
        string str;
        int x;
        inFile>>str;
        inFile>>x;

        cout<<str<<" "<<x<<endl;

        if(inFile.eof())
            cout<<"Bhaiya Ji hum last taak pauch gaye";
        
        inFile.close();
    }
}