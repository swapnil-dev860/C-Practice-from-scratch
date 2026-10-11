#include<stdio.h>
int main(){
	int year;
	printf("Enter a year:");
	if(scanf("%d",&year)!=1)
	{
		printf("Invalid year");
		return 0;
	}
	if(year%400 ==0)
	{
		printf("This is a leap year");
	}
	else if(year%100==0)
	{
		printf("This is not a leap year");
	}
	else if(year%4 == 0)
	{
		printf("This is a leap year ");
	}
	else
	{
		printf("This is not a leap year ");
	}
	return 0;
}