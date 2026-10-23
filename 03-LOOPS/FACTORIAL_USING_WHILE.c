#include<stdio.h>
int main(){
	int N;
	long long int fact=1;
	int i=1;
	printf("Enter a number to calculate factorial of:");
	scanf("%d",&N);
	while(i<=N)
	{
		fact=fact*i;
		i++;
	}
printf("Factorial of %d=%lld",N,fact);
return 0;
}