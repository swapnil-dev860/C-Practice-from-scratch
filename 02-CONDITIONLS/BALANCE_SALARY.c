#include<stdio.h>
int main(){
	int salary;
	float insurance;
	printf("The salary of the employee:");
	scanf("%d",&salary);
	if(salary<=10000)
	{
		insurance=5.0/100*salary;
	}
	else if(salary>10000 && salary<=25000)
	{
		insurance=(7.0/100)*salary;
	}
	else if(salary>25000 && salary<=50000)
	{
		insurance=(10.0/100)*salary;
	}
	else
	{
		insurance=(12.0/100)*salary;
	}
	printf("Balance salary:%.2f",salary-insurance);
	return 0;
}