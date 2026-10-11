#include<stdio.h>
int main(){
	float SI,CI,p,n,r;
	printf("Enter the principal amount in rupees:\n");
	scanf("%f",&p);
	printf("Enter the time in years:\n");
	scanf("%f",&n);
	printf("Enter the rate in percent:\n");
	scanf("%f",&r);
	SI=(p*n*r)/100.0;
	CI=p*pow((1+r/100),n);
	printf("The simple interest is:%.2f\n",SI);
	printf("The compound inteerst is:%.2f\n",CI);
	return 0;
}