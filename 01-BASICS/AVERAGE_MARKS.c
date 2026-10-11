#include<stdio.h>
int main(){
	float Total,Average;
	int m1,m2,m3,m4;
	printf("Enter marks m1:\n");
	scanf("%d",&m1);
	printf("Enter marks m2:\n");
	scanf("%d",&m2);
	printf("Enter marks m3:\n");
	scanf("%d",&m3);
	printf("Enter marks m4:\n");
	scanf("%d",&m4);
	Total=m1+m2+m3+m4;
	Average=Total/4.0;
	printf("The average of marks in four subjects:%.2f",Average);
	return 0;	
}