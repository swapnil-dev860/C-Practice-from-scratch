#include<stdio.h>
int main(){
	int H,M,S;
	printf("Provide the time in seconds:\n");
	scanf("%d",&S);
	H=S/3600;
	S=S%3600;
	M=S/60;
	S=S%60;
	printf("The time in format HH:MM:SS is %d:%d:%d",H,M,S);
	return 0;
}