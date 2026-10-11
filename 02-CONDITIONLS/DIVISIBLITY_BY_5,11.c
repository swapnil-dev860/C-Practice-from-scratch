#include<stdio.h>
int main(){
	int num;
	printf("Enter a no:");
	scanf("%d",&num);
	if(num%5 == 0 && num % 11 !=0)
	{
		printf("%d is divisible by 5",num);
	}
	else if(num % 5!=0 && num%11 == 0 )
	{
		printf("%d is divisible by 11",num);
	}
	else if(num%5 == 0 && num % 11 ==0)
	{
		printf("%d is divisible by both 5 and 11",num);
	}
	else
	{
		printf("%d is divisible by neither 5 or 11",num);
	}
	return 0;
}