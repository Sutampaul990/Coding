#include<stdio.h>
int main()
{
    int n,temp,j;
    printf("Enter the numbers of Elements : ");
    scanf("%d",&n);
    if(n==0){
        printf("Invalid Array...");
    }
    else{
        int arr[n];
        printf("Enter the Elements of the Array : ");
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

        //Sorting------------------
        for(int i=1;i<n;i++){
            temp=arr[i];
            j=i-1;
            while(j>=0&&arr[j]>temp){
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=temp;
        }
        printf("After Sorting----------\n");
        for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    }
    return 0;
}