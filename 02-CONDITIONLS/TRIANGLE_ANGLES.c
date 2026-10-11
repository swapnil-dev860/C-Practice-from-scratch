#include<stdio.h>
int main(){
	int a1,a2,a3;
	printf("Angle 1:");
	scanf("%d",&a1);
	printf("Angle 2:");
	scanf("%d",&a2);
	printf("Angle 3:");
	scanf("%d",&a3);
	if(a1>0 && a2>0 && a3>0 && a1+a2+a3==180)
	{
		if(a1==a2 && a2==a3)
		{
			printf("Equilateral triangle");
		}
		else if(a1<a2 && a1<a3)
		{
			printf("Smallest angle:%d",a1);
		}
		else if(a2<a1 && a2<a3)
		{
			printf("Smallest angle:%d",a2);
		}
		else
		{
			printf("Smallest angle:%d",a3);
		}
	}
	else
	{
		printf("Invalid Triangle");
	}
	return 0;
}