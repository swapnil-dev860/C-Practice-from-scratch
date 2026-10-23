#include<stdio.h>
int main(){
	int marks,sum;
	sum=0;
	for(int i=1;i<=10;i++)
	{
		printf("Enter marks of student:");
		scanf("%d",&marks);
		sum=sum+marks;
	}
printf("The total sum:%d",sum);
	return 0;	
	
}