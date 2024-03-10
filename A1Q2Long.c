/*Implement following program using Array
2. C program to find nearest lesser and greater element in an array
*/
#include<stdio.h>
 int main(){
    int l,num[100],less[100],more[100],N,j=0,k=0,max=0,min=0;
    printf("Enter the length of array : ");
    scanf("%d",&l);
    for (int i = 0; i < l; i++)
    {
        printf("Enter %d element of Array : ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Enter the Number : ");
    scanf("%d",&N);
    printf("Your entered array is : ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ",num[i]);
    }
    for (int i = 0; i < l; i++)
    {
        if(num[i]<N){

            less[j]=num[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        if(less[i]>max){
            max=less[i];
        }
    }
    printf("\nNearest lesser number than %d is : %d",N,max);
    for (int i = 0; i < l; i++)
    {
        if(num[i]>N){

            more[k]=num[i];
            k++;
        }
    }
    for (int i = 0; i < l; i++)
    {
        if(num[i]>min){
            min=num[i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        if(more[i]<min){
            min=more[i];
        }
    }
    printf("\nNearest greater number than %d is : %d",N,min);

 }