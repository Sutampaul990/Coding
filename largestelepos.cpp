#include<iostream>
using namespace std;
int main()
{
    cout<<"                 Finding Postion of the Largest Element in an Array                \n";
    int n;
    cout<<"Size of the Array : ";
    cin>>n;
    int a[n],largest,temp=0;
    cout<<"Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    largest=a[0];
    for(int i=1;i<n;i++){
        if(largest<a[i]){
            largest=a[i];
            temp=i;
            //cout<<i<<endl;
        }
    }
    cout<<"Here the Array -----\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }    
    cout<<"\nPosition of the Largets Element is : "<<temp+1<<endl;
    return 0;
}