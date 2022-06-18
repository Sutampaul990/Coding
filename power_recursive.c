#include<stdio.h>
int power(int n,int pow)
{
    if(pow==0)
    return 1;
    int temp=power(n,pow/2);
    temp*=temp;
    if(pow%2==0)
        return temp;
    else
        return temp*n;
}
int main()
{
    int n,pow;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Enter the power : ");
    scanf("%d",&pow);
    printf("So the ans : %d",power(n,pow));
    return 0;
}