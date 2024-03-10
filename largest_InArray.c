/*Write a program to accept n number of element from user (where, n is specified by user) and stores
data in an array and display the largest element of that array using loops.
*/

#include<stdio.h>
int main()
{
	int num,i,j,max=1,a[100];
	printf("Enter the number of element in array : ");
	scanf("%d",&num);
	printf("Enter %d elements in array : ",num);
	for(i=0;i<num;i++)
	{ 
		scanf("%d",&a[i]);
	}	
	for(j=0;j<num;j++)
	{if(a[j]>=max)
		{
			max=a[j];
		}
		continue;
	}
	printf("Laregst number in array is %d",max);
	return 0;
}