#include<stdio.h>
int main(){
	int N;
	long long int fact=1;
	printf("Enter a number to calculate factorial of:");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		fact=fact*i;
	}
printf("Factorial of %d=%lld",N,fact);
return 0;
}