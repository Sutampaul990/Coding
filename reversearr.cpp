#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the Array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the Elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the full Array : \n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<"\t";
    
    cout<<"\nEnter the Elements : \n";
    for(int i=n-1;i>=0;i--)
    cout<<a[i]<<"\t";
    return 0;
}
