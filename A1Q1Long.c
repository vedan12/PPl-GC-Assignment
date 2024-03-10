/*Implement following program using Array
1. C program to swap first element with last, second to second last and so on (reversing elements)
*/
#include<stdio.h>

int main(){
    int l,num[100],new[100];
    printf("Enter length of array : ");
    scanf("%d",&l);
    for (int i = 0; i < l; i++)
    {
        printf("Enter %d number of array : ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Your entered array is : ");
    for (int i = 1; i <= l; i++)
    {
        printf("%d ",num[i-1]);
    }
    for (int i = 0; i < l; i++)
    {
        new[i]=num[l-1-i];
    }
    printf("\nReversed array is : ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ",new[i]);
    }
    return 0;    
}
