/*Implement following program using 2D array
3. C program to read a matrix and print it's diagonal elements*/
#include<stdio.h>
int main(){
    int r,c;
    int matrix[100][100];
    printf("Enter no of rows in matrix : ");
    scanf("%d",&r);
    printf("Enter no of columns in matrix : ");
    scanf("%d",&c);
    if (r==c)
    {
        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
        printf("Enter number in row %d and column %d : ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
        }

    }  
    printf("Your entered Matrix is :\n");  
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
        printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal elements of Above Matrix are :\n");
    for (int i = 0; i < r; i++)
    {
        printf("%d ",matrix[i][i]);
    }  
    printf("\n"); 
    }
    else{
        printf("Matrix should be square Matrix");
    }
    
}