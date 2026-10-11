#include<stdio.h>
int main(){
	int days,years,weeks,rem_days;
	printf("Tell the no of days:");
	scanf("%d",&days);
	years=days/365;
	rem_days=days%365;
	weeks=rem_days/7;
	rem_days=rem_days%7;
	printf("years =%d, weeks=%d, days=%d",years,weeks,rem_days);
	return 0;
}