/*Implement following program in C using the concept of recursion

4.C program to reverse an integer number using recursion
*/
#include<stdio.h>

int reverse(int num);

int main(){

    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
	printf("Entered number is %d",num);
    printf("\nReversed number is ");
    reverse(num);
    return 0;
}

int reverse(int num){
	if(num!=0){
	int ans=num%10;
	printf("%d",ans);
	num=num/10;
	reverse(num);
}
	else{
		return 0;
	}
}
