/*Implement following program using 2D array
1. C program to find sum of two matrices
*/
#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
    int matrix1[100][100],matrix2[100][100],sum[100][100];
    printf("Enter no of rows in 1st matrix : ");
    scanf("%d",&r1);
    printf("Enter no of columns 1st matrix : ");
    scanf("%d",&c1);
    printf("Enter no of rows in 2nd matrix : ");
    scanf("%d",&r2);
    printf("Enter no of columns in 2nd matrix : ");
    scanf("%d",&c2);
    if (r1==r2 && c1==c2)
    {
        int r=r1;
        int c=c1;
        printf("For First Matrix\n");
        for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
        printf("Enter number in row %d and column %d : ",i+1,j+1);
        scanf("%d",&matrix1[i][j]);
        }

    }  
    printf("For Second Matrix\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
        printf("Enter number in row %d and column %d : ",i+1,j+1);
        scanf("%d",&matrix2[i][j]);
        }

    }
    printf("Your first Matrix is :\n");  
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
        printf("%d ",matrix1[i][j]);
        }
        printf("\n");

    }
    printf("Your second Matrix is :\n");  
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
        printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j]=matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Summation Matrix for those is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("No of rows and columns of two matrix should be equal");
    } 
    return 0;
}