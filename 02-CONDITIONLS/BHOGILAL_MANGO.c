#include<stdio.h>
int main(){
	int Q,bill,price=65;
	float discount;
	printf("Enter the quantity of mangoes bought in kgs:");
	scanf("%d",&Q);
	bill=Q*price;
	if(bill>2000)
	{
		discount=(20.0/100)*bill;
	}
	else if(bill<2000 && bill>=1500)
	{
		discount=(15.0/100)*bill;
	}
	else
	{
		discount=0;
	}
	printf("Final price:%.2f",bill-discount);
	return 0;	
}