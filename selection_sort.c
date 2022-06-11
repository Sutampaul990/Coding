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

        //Sorting
        for(int i=0;i<n-1;i++)
        {
            min=i;
            for(int j=i+1;j<n;j++)
                if(arr[min]>arr[j])
                    min=j;
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        printf("After Sorting----------\n");
        for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    }
    return 0;
}