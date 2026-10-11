#include<stdio.h>
int main(){
	float mrp,discount,price,gst,f_price;
	printf("Enter the marked price of product:");
	scanf("%f",&mrp);
	if (mrp >= 10000)
	{
		discount=0.25*mrp;
		price=mrp-discount;
		gst=0.18*price;
	}
	else if(mrp >=5000 && mrp < 10000)
	{
		discount=0.15*mrp;
		price=mrp-discount;
		gst=0.18*price;
	}
	else
	{
		discount=0.05*mrp;
		price=mrp - discount;
		gst=0.18*price;
	}
	f_price=price+gst;
	printf("Discount:%.2f GST:%.2f Final Price:%.2f",discount,gst,f_price);
	return 0;
}