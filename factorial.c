#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        fact*=i;
    }
    printf("Factorial of %d! : %d ",n,fact);
    return 0;
}