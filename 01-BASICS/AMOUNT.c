#include<stdio.h>
int main(){
	int SP,CP,Profit;
	float Profit_percent;
	printf("Tell the cost price of your product:");
	scanf("%d",&CP);
	printf("Tell the selling price of your product:");
	scanf(" %d",&SP);
	Profit=SP-CP;
	Profit_percent=((float)Profit/CP)*100;
	printf("Profit = %d, Profit %% = %.2f", Profit,Profit_percent); 
	return 0;
}