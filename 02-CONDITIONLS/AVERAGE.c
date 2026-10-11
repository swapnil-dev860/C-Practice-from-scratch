#include<stdio.h>
int main(){
	int m1,m2,m3; //input marks out of 25 marks//
	float avg;
	printf("Enter m1:");
	scanf("%d",&m1);
	printf("Enter m2:");
	scanf("%d",&m2);
	printf("Enter m3:");
	scanf("%d",&m3);
	if(m1<m2 && m1<m3)
	{
		avg=(m2+m3)/2.0;
		printf("The avg of best two scores is %.2f",avg);
	}
	else if(m2<m1 && m2<m3)
	{
		avg=(m1+m3)/2.0;
		printf("The avg of best two scores is %.2f",avg);
	}
	else
	{
		avg=(m1+m2)/2.0;
		printf("The avg of best two scores is %.2f",avg);
	}
	return 0;
}