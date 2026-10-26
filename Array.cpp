#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the Elements are ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;

}