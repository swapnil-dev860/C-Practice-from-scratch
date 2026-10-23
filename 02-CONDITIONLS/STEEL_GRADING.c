#include<stdio.h>
int main(){
	float H,C,T;
	int C1,C2,C3;
	printf("Enter the value of H:\n Value of C:\n Value of T:\n");
	scanf("%f %f %f",&H,&C,&T);
	C1=H>50;
	C2=C>0.7;
	C3=T>5600;
	if(C1&&C2&&C3)
	{
		printf("Grade 10");
	}
	else if(C1&&C2)
	{
		printf("Grade 9");
	}
	else if(C2&&C3 )
	{
		printf("Grade 8");
	}
	else if(C1&&C3)
	{
		printf("Grade 7");
	}
	else if(C1||C2||C3)
	{
		printf("Grade 6");
	}
	else
	{
		printf("Grade 5");
	}
	return 0;
}