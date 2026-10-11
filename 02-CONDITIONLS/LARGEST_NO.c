#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	if (a>b)
	{
		printf("Largest :%d",a);
	}
	else if(b>a)
	{
		printf("Largest:%d",b);
	}
	else
	{
		printf("a and b are equal");
	}
	return 0;
}