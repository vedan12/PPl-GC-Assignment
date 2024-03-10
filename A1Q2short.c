/*Implement following program using Array
2. C program to find nearest lesser and greater element in an array
*/
#include<stdio.h>
int main(){
    int l,num[100],N,max,less=0;
    char e;
    printf("Enter the length of array : ");
    scanf("%d",&l);
    for (int i = 0; i < l; i++)
    {
        printf("Enter %d element of Array : ",i+1);
        scanf("%d",&num[i]);
    }
    while (8>0)
    {
    printf("Your entered array is : ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\nEnter the Number : ");
    scanf("%d",&N);
    if(N==0){
        printf("Program ended");
        return 0;
    }
    for (int i = 0; i < l; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
    }
    int great=max;
    for (int i = 0; i < l; i++)
    {
        if (num[i]<N && num[i]>less)
        {
            less=num[i];
        }
        else if (num[i]>N && num[i]<great)
        {
            great=num[i];
        }
    }
    printf("\nNearest lesser number than %d is : %d",N,less);
    printf("\nNearest greater number than %d is : %d",N,great);
    }
    return 0;   
}