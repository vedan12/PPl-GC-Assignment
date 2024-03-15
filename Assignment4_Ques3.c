/*Implement following program in C using the concept of recursion

3.C program to calculate sum of all digits using recursion

*/

#include<stdio.h>
int sum(int num);

int main(){
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	int ans=sum(num);
	printf("Summation of the digits is %d",ans);
	return 0;
}

int sum (int num){
	if(num!=0){
	int ans=num%10+sum(num/10);
	return ans;
	}
	else{
		return 0;
	}
}
