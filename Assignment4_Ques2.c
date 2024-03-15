/*

Implement following program in C using the concept of recursion

2.C program to count digits of a number using recursion   */

#include<stdio.h>

int countDigit(int num); 

int main(){
	
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	int ans=countDigit(num);
	printf("Threre are %d digits in %d",ans,num);
	return 0;
}

int countDigit(int num){
	
	static int count=0;
	if(num>0){
		count++;
		countDigit(num/10);
		return count;
	}
	else{
		return 0;
	}
}

