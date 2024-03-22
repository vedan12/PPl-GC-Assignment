#include<stdio.h>
int main(){
	int A[50],l;
	int *ptr;
	printf("Enter the length of array : ");
	scanf("%d",&l);
	printf("Enter the elements of array : ");
	for (int i=0;i<l;i++){
	    scanf("%d",&A[i]);
	}
	ptr=A;
    printf("Input array is : ");
	for(int i=0;i<l;i++)
	{
	    printf("%d ",*ptr);
	    ptr++;
	}
	return 0;
}
