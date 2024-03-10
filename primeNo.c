#include<stdio.h>
#include<math.h>

/*Write a program to check whether given number is Prime or not. Take a number as input from user.*/

int main()
{
	int x,i;
	printf("Enter the number: ");
	scanf("%d",&x);
	int sqrt_of_x=sqrt(x);
	for (i=2;i<sqrt_of_x;i++)
	{
		if(x%i==0)
		{
			printf("%d is not prime",x);
			return 0;
		}
		else
		{
			printf("%d is prime",x);
			return 0;
		}
	}
	return 0;
}