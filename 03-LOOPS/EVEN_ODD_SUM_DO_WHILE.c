#include <stdio.h>
int main() {
    int N, even_sum = 0, odd_sum = 0;
    int i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &N);
	do {
        if (i % 2 == 0) {
            even_sum = even_sum + i;
        }
        else {
            odd_sum = odd_sum + i;
        }

        i++;
    } while (i <= N);
    printf("Sum of even numbers from 1 to %d = %d\n", N, even_sum);
    printf("Sum of odd numbers from 1 to %d = %d", N, odd_sum);
    return 0;
}