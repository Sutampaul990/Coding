#include<iostream>
using namespace std;
int main()
{
    cout<<"                  Deletion in an Array                \n";
    int n,pos,value;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>pos;
        if(pos<n&&n>0){
        
        int x[n];
        cout<<"Enter the elements : \n";
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=pos-1;i<n;i++){
            x[i]=x[i+1];
        }
            
        cout<<"Here the Final Array ---\n";
        for(int i=0;i<n-1;i++){
            cout<<x[i]<<"\t";
        }
        cout<<endl;
    }
    else
    cout<<"Invalid"<<endl;

    return 0;
}