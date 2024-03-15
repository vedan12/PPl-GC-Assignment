/*Implement following program in C using the concept of recursion

1.C program to find factorial of a number using recursion

*/
#include<stdio.h>

int facto(int n);

int main(){
	
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int ans=facto(n);
	printf("Factorial of %d is %d",n,ans);
	return 0;	
}

int facto(int n){
	
	if (n==0 || n==1)
	{
		return 1;
	}
	else{
	int ans=n*facto(n-1);
	return ans;
	}
