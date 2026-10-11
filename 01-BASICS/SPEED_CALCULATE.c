#include<stdio.h>
int main(){
	float D,H,S;
	printf("Enter the distance travelled by the bike in kilometres:\n");
	scanf("%f",&D);
	printf("Enter the time taken by bike to travel distance D in hours:\n");
	scanf("%f",&H);
	S=D/H;
	S=S*(5/18.0);
	printf("The speed in m/sec is:%.2f",S);
	return 0;
	
}