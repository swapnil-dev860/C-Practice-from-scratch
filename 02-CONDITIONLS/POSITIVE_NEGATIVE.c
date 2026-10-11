#include<stdio.h>
int main(){
	int num;
	printf("Enter the value:");
	scanf("%d",&num);
	if (num>0)
	{
		printf("Positive");
	}
	else if (num<0)
	{
		printf("Negative");
	}
	else
	{
		printf("Number is zero");
	}
	return 0;
}