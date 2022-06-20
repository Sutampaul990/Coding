#include<iostream>
using namespace std;
bool palindrome(int n)
{
    int rev=0,temp=n;
    while(temp!=0){
        int r=temp%10;
        rev=rev*10+r;
        temp/=10;
    }
    return (rev==n);
}
int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    //cout<<palindrome(n)<<endl;
    if(palindrome(n))
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
    return 0;
}