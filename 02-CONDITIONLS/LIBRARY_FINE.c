#include<stdio.h>
int main(){
	int days,fine ;
	printf("NO of days overdue:");
	scanf("%d",&days);
	if (days<=7)
	{
		fine=days*2;
	}	
	else if(days<=14)
	{
		fine=7*2 + (days-7)*5;
	}
	else
	{
		fine = 7*2 + 7*5 + (days-14)*10;
	}
	printf("Total fine:%d",fine);
	return 0;
}