#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the numbers of Elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of the Array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the Element you want to search : ");
    int search;
    scanf("%d",&search);
//Searching------------------------------
    int low=0,mid,high=n-1;
    mid=(low+high)/2;
    while(low<=high){
        if(search==arr[mid]){
                printf("So the position of the Element : %d",mid+1);
                break;
            }
        else if(search>arr[mid])
            low=mid+1;
        else
            high=mid-1;
        mid=(low+high)/2; 
    }
    if(low>high)
    printf("Invalid Search...");
    
    return 0;
}