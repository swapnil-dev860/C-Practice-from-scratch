#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("Number");
    }
    else if ((ch >= 'A' && ch <= 'Z') ||
             (ch >= 'a' && ch <= 'z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Symbol");
    }

    return 0;
}