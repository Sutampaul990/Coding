
// C Program to find
// transpose of a matrix
#include <stdio.h>
 

 
int main()
{
    int row,col,a[10][10],b[10][10];
    printf("Enter Row : ");
    scanf("%d",&row);
    printf("Enter Column : ");
    scanf("%d",&col);
    printf("Enter the elements : \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix : \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            b[i][j] = a[j][i];
 
    printf("Result matrix is \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
           printf("%d\t", b[i][j]);
        printf("\n");
    }
 
    return 0;
}