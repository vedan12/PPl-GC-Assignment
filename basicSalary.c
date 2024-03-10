#include<stdio.h>

/*Write a program to calculate the salary of an employee given his basic pay (take input from
user).Calculate gross salary of employee. Let HRA be 10% of basic pay and TA be 5% of basic pay.
Let an employee pay professional tax as 2% of total salary. Calculate net salary payable after
deduction*/

int main()
{
	int BasicPay,HRA,TA,TotalPay,ProffeTax,NetSal;
	printf("Enter your Basic pay: ");
	scanf("%d",&BasicPay);
	HRA=BasicPay/10;
	TA=BasicPay/20;
	TotalPay=BasicPay+HRA+TA;
	ProffeTax=TotalPay/50;
	NetSal=TotalPay-ProffeTax;
	printf("\nHouse rent allowance is %d",HRA);
	printf("\nTravellance allowance is %d",TA);
	printf("\nProffeTax is %d",ProffeTax);
	printf("\nNet Salary after deduction is %d",NetSal);
return 0;
}