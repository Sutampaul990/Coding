#include<stdio.h>
int main()
{
    int n,i=0,min;
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
        //Sorting----------
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++)
                if(arr[j]>arr[j+1])
                    {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
        }
        printf("After Sorting----------\n");
        for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    }
    return 0;
}