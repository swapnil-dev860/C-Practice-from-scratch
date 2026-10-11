#include<stdio.h>
int main(){
	int a,b,ch;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("1.Addition \n2.Subtraction \n3.Multiplication\n4.Division\n Enter your choice:");
	scanf("%d",&ch);
	if(ch == 1)
	{
		printf("Addition is %d",a+b);
	}
	else if(ch == 2)
	{
		printf("Subtraction is:%d",a-b);
	}
	else if(ch == 3)
	{
		printf("Multiplication is:%d",a*b);
	}
	else if(ch == 4)
	{
		if(b != 0)
		{
			printf("Division is:%d",(float)a/b);
		}
		else
		{
			printf("Division by zero is not valid");
		}
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}