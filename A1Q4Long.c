/*Implement following program using Array
4.C program to find second largest element in a one dimensional array
*/
#include<stdio.h>
int main(){
    int l,num[100],less[100],j=0,max1=0,max2=0;
    printf("Enter the length of array : ");
    scanf("%d",&l);
    for (int i = 0; i < l; i++)
    {
        printf("Enter %d element of Array : ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Your entered array is : ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ",num[i]);
    }
    for (int i = 0; i < l; i++)
    {
        if(num[i]>max1){
            max1=num[i];
        }
    }
    for (int i = 0; i < l; i++)
    {
        if(num[i]<max1){

            less[j]=num[i];
            j++;
        }
    }
    for (int i = 0; i < l; i++)
    {
        if(less[i]>max2){
            max2=less[i];
        }
    }
    printf("\nSecond largest number in array is : %d",max2);
}