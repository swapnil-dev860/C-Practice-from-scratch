#include<stdio.h>
int main(){
	int units,bill;
	printf("Enter the no of units consumed:");
	scanf("%d",&units);
	if (units <= 100)
	{
		bill=units*2;
		printf("The bill amount in INR is:%d",bill);
	}
	else if(units > 100 && units <=200)
	{
		bill=100*2 + (units-100)*3;
		printf("The bill amount in INR is:%d",bill);
	}
	else 
	{
		bill = 100*2 + 100*3 + (units-200)*5;
		printf("The bill amount in INR is:%d",bill);
	}
	return 0;
}