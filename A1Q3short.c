/*Implement following program using Array
C program to find two largest elements in a one dimensional array
*/
#include<stdio.h>
int main(){
    int l,num[100];
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
    int largest1=num[0];
    int largest2=num[1];
    if(largest1<largest2){
        int temp=largest1;
        largest1=largest2;
        largest2=temp;
    }
    for (int i = 2; i < l; i++)
    {
        if (num[i]>largest1)
        {
            largest2=largest1;
            largest1=num[i];
        }
        else if (num[i]>largest2)
        {
            largest2=num[i];
        }
        
    }
    printf("\nLargest number in array is %d",largest1);
    printf("\nSecond largest number in array is %d",largest2);
    
    return 0;   
}