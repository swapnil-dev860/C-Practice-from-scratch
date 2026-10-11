#include<stdio.h>
int main(){
	int bsal;
	float HRA,DA;
	float gsal;
	printf("Enter your basic pay:");
	scanf("%d",&bsal);
	if(bsal<=10000)
	{
		HRA=(20.0/100)*bsal;
		DA=(80.0/100)*bsal;
	}
	else if(bsal>10000 && bsal<=20000)
	{
		HRA=(25.0/100)*bsal;
		DA=(90.0/100)*bsal;
	}
	else 
	{
		HRA=(30.0/100)*bsal;
		DA=(95.0/100)*bsal;
	}
	gsal=bsal+HRA+DA;
	printf("HRA:%.2f DA:%.2f Gross salary:%.2f",HRA,DA,gsal);
	return 0;
	
}