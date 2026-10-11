#include<stdio.h>
int main(){
	int annual_income;
	float tax;
	printf("Enter your annual income:");
	scanf("%d",&annual_income);
	if(annual_income<=300000)
	{
		tax=0;
	}
	else if(annual_income<=600000)
	{
		tax=(annual_income-300000)*0.05;
	}
	else if(annual_income<=1000000)
	{
		tax=300000*0 + 300000*0.05 +(annual_income-600000)*0.1;
	}
	else
	{
		tax=300000*0+300000*0.05+400000*0.1+(annual_income-1000000)*0.2;
	}
	printf("Tax payable:%.2f",tax);
	return 0;
}