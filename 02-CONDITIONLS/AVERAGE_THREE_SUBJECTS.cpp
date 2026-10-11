#include<stdio.h>
int main(){
	int m1,m2,m3;
	float avg;
	printf("Enter marks of first subject:");
	scanf("%d",&m1);
	printf("Enter marks of second subject:");
	scanf("%d",&m2);
	printf("Enter marks of third subject:");
	scanf("%d",&m3);
	if (m1<m2 && m1<m3)
	{
		avg=(m2+m3)/2.0;
	}
	else if(m2<m1 && m2<m3)
	{
		avg=(m1+m3)/2.0;
	}
	else 
	{
		avg=(m1+m2)/2.0;
	}
	printf("AVERAGE:%.2f",avg);
	return 0;	
}