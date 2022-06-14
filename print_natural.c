#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the Last term : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(i%2==0)
            sum+=i;
    
    printf("Sum of all even numbers between 1 to %d : %d ..",n,sum);
    return 0;
}