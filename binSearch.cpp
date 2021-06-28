#include<iostream>
using namespace std;
int main()
{
    int len;
    cout<<"Enter your size of the array"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the array in sorted manner"<<endl;
    for(int i=0; i<len; i++)
        cin>>arr[i];
    int key=0;
    cout<<"Enter you targeted key"<<endl;
    cin>>key;
    int low=0, high=len-1, mid=0;
    do
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Key found at index "<<mid;
            return 0;
        }
        if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    while (low<=high);
    cout<<"Sorry! the key is not found"<<endl;
    
}