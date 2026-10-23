#include<stdio.h>
int main(){
	int n;
	for (n=1;n<=5;n++)
	{
		if(n==3)
		{
			printf("I know the continue statement\n");
			continue;
		}
	printf("This is round:%d\n",n);
	}
printf("I am out of the loop");
return 0;
}