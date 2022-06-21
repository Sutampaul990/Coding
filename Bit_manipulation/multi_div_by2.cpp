#include<iostream>
using namespace std;
int multi(int x,int y)
{
    return x<<y;
}
int divi(int x,int y)
{
    return x>>y;
}

int main()
{
    int x,y;
    printf("Enter any number : ");
    scanf("%d",&x);
    printf("Enter the power of 2 : ");
    scanf("%d",&y);
    printf("so after multiplication : %d\n",multi(x,y));
    printf("so after Division : %d",divi(x,y));
    return 0;
}