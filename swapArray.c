/*C program for swaping array elements*/
#include<stdio.h>
int main()
{
	int i,j,n,a[100],k=1,t[100];
	printf("Enter length of array: ");
	scanf("%d",&n);		
    printf("Enter elements of array : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(k<=n)
	{
		t[k]=a[n-k+1];
		k++;
	}
	printf("Reversed array is :");
	for( j=1;j<=n;j++)
	{
        printf(" %d",t[j]);
	}
	return 0;
}