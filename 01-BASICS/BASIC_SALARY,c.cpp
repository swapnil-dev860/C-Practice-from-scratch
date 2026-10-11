#include<stdio.h>
int main(){
	float Gross,BP,DA,HRA,TA;
	printf("Enter your basic pay:\n");
	scanf("%f",&BP);
	DA=(15.0/100)*BP;
	TA=(5.0/100)*BP;
	HRA=(10.0/100)*BP;
	Gross=BP+DA+TA+HRA;
	printf("The total money the employee gets :%.2f",Gross);
	return 0;
}