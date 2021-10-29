#include<fstream>
using namespace std;
int main(void)
{
    ofstream outfile("my.txt");
    outfile<<"Hello"<<endl;
    outfile<<123<<endl;
    outfile.close();
}