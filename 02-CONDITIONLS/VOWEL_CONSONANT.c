#include<stdio.h>
int main(){
	char ch;
	printf("Enter an alphabet:");
	scanf("%c",&ch);
	if(ch >='a' && ch <='z')
	{
		if (ch =='a' || ch=='b'|| ch=='c' || ch=='d'|| ch =='e')
		{
			printf("VOWEL");
		}
		else
		{
			printf("CONSONANT");
		}
	}
	else if(ch >='A' && ch <='Z')
	{
		if(ch =='A' ||ch =='B' || ch =='C'|| ch=='D' || ch =='E')
		{
			printf("VOWEL");
		}
		else
		{
			printf("CONSONANT");
		}
	}
	else
	{
		printf("INVALID CHARACTER ENTERED");
	}
	return 0;
}