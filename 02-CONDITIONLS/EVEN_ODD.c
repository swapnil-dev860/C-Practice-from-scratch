#include<stdio.h>
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The number is even");
	}
	else if(num%2!=0)
	{
		printf("The number is odd");
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}