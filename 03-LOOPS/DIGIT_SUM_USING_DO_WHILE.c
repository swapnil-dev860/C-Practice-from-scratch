#include<stdio.h>
int main(){
	int n,digit,sum=0;
	int i=1;
	printf("Enter a 4 digit number:");
	scanf("%d",&n);
	if(n>=1000 && n<10000)
	{
		do
		{
			digit=n%10;
			n=n/10;
			sum=sum+digit;
			i++;
		} while(i<=4);
	}
	else
	{
		printf("Invalid input");
	}
	printf("Sum of digits=%d",sum);
	return 0;
}