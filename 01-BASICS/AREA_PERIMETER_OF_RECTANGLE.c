#include<stdio.h>
int main(){
	float l,b,area,perimeter;
	printf("Give the length of the rectangle:");
	scanf("%f",&l);
	printf("Give the breadth of the rectangle:");
	scanf("%f",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("The perimeter of the rectangle is:%f\n",perimeter);
	printf("The area of the rectangle is:%f\n",area);
	return 0;
}