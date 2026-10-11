#include<stdio.h>
int main(){
	float dist_km,dist_m,dist_cm;
	printf("Give the distance covered in kilometres=");
	scanf("%f",&dist_km);
	dist_m=dist_km*1000;
	dist_cm=dist_m*100;
	printf("Kilometres= %f , Metres=%.2f, Centimetres=%.2f",dist_km,dist_m,dist_cm);
	return 0;
}