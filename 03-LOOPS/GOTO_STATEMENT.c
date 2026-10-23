#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		goto even;
	}
	else
	{
		goto odd;
	}
	even:
		printf("No is even");
		goto end;
	odd:
		printf("No is odd");
	    goto end;
	end:
		return 0;
}    