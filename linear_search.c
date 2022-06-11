#include<stdio.h>
int main()
{
    int n,i=0,flag=0;
    printf("Enter the numbers of Elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of the Array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the Element you want to search : ");
    int search;
    scanf("%d",&search);
    if(n>0){
        while(i<n){
            if(search==arr[i]){
                flag=1;
                break;
            }
            i++;
        }
        if(flag==1)
        printf("Position of the Element is : %d",i+1);
        else
        printf("Invalid Search");
    }
    else
    printf("Array doesn't Exist...");
    return 0;
}