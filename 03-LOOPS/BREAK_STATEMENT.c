#include<stdio.h>
int main(){
	int n;
	for(n=1;n<=5;n++)
	{
		if(n==3)
		{
			printf("I know the break statement\n");
			break;
		}
	printf("Number:%d\n",n);
	}
printf("Out of the loop\n");
return 0;
}