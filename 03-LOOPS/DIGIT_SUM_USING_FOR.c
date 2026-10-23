#include<stdio.h>
int main(){
	int n,digit,sum=0;
	printf("Enter a 4 digit number:");
	scanf("%d",&n);
	if(n>=1000 && n<10000)
	{
		for(int i=1;i<=4;i++)
		{
			digit=n%10;
			n=n/10;
			sum=sum+digit;
		}
	}
	else
	{
		printf("Invalid input");
	}
	printf("Sum of digits=%d",sum);
	return 0;
}