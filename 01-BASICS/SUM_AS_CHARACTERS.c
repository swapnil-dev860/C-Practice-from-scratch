#include <stdio.h>
int main() {
    char a, b;
    int sum;
    printf("Enter first single digit number: ");
    a = getchar();
	getchar();   
    printf("Enter second single digit number: ");
    b = getchar();
    sum = (a - '0') + (b - '0');
	printf("Sum = %d", sum);
	return 0;
}