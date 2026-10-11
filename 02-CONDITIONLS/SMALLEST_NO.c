#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	if (a==b && a==c)
	{
		printf("all three numbers are equal");
	}
	else if( a<=b && a<=c)
	{
		printf("%d is the smallest",a);
	}
	else if (b<=a && b<=c)
	{
		printf("%d is the smallest",b);
	}
	else
	{
		printf("%d is the smallest",c);
	}
	return 0;
}