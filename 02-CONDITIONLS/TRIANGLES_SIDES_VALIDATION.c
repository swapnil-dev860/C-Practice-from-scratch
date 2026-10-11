#include<stdio.h>
int main(){
	int s1,s2,s3;
	char result;
	printf("Enter the side 1:");
	scanf("%d",&s1);
	printf("Enter the side 2:");
	scanf("%d",&s2);
	printf("Enter the side 3:");
	scanf("%d",&s3);
	if(s1+s2 <=s3 || s1+s3<=s2 || s2+s3<= s1)
	{
		result='N';
	}
	else if(s1==s2 && s2==s3)
	{
		result='E';
	}
	else if(s1==s2 || s2==s3|| s1==s3 )
	{
		result='I';
	}
	else
	{
		result='S';
	}
	printf("RESULT:%c",result);
	return 0;
	
}