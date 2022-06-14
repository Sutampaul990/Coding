#include<iostream>
using namespace std;
int main()
{
    cout<<"                 Finding Postion of the 2nd Largest Element in an Array                \n";
    int n;
    cout<<"Size of the Array : ";
    cin>>n;
    int a[n],largest,temp,larger,j=0;
    cout<<"Elements of the Array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    largest=a[0];
    temp=0;
    for(int i=0;i<n;i++){
        if(largest<a[i]){
            larger=largest;           
            largest=a[i];
        }

    }
    cout<<larger<<endl;
    for(int i=0;i<n;i++){
        if(larger==a[i])
        temp=i;
    }
    cout<<temp+1<<endl;
    return 0;
}