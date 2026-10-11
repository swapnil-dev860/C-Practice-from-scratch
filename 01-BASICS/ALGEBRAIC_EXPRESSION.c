#include<stdio.h>
int main(){
	int a,b,c,d,x;
	float y;
	printf("Value of a:");
	scanf("%d",&a);
	printf("Value of b:");
	scanf("%d",&b);
	printf("Value of c:");
	scanf("%d",&c);
	printf("Value of d:");
	scanf("%d",&d);
	printf("Value of x:");
	scanf("%d",&x);
	y=a*x*x*x + b*x*x + c*x + d;
	printf("The value of the expression is:%.2f",y);
	return 0;
}