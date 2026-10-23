#include<stdio.h>
int main(){
	int N;
	long long int fact=1;
	int i=1;
	printf("Enter a number to calculate factorial of:");
	scanf("%d",&N);
	do
	{
		fact=fact*i;
		i++;
	}while(i<=N);
printf("Factorial of %d=%lld",N,fact);
return 0;
}