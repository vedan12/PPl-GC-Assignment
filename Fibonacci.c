/*Write a program generate Fibonacci series without using recursive function

#include<stdio.h>
int main()
{
int num,i,num1=0,num2=1,num3;
	printf("Enter length of Fibonacci series: ");
	scanf("%d",&num);
	printf("%d %d",num1,num2);
	printf(" ");
	for(i=0;i<num;i++)
	{
		num3=num1+num2;
		printf("%d",num3);
		printf(" ");
		num1=num2;
		num2=num3;
	}
	return 0;
}*/



/*Write a program generate Fibonacci series using recursive function*/

#include<stdio.h>

#include<conio.h>

int fibonacci(int l);

int main()
{
int l, i;
printf("Enter length of Fibonacci series : ");
scanf("%d",&l);
printf("Here is the Fibonacci series : ");
for(i=0;i<l;i++) 
{
    printf(" %d",fibonacci(i));
}
}

int fibonacci(int l){

if(l==0) 
{
    return 0;
}
else if(l==1) 
{
    return 1;
}
else 
{
    return (fibonacci(l-1) + fibonacci(l-2));
}
}
