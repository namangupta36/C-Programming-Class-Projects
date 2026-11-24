#include <stdio.h>
int main ()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    printf("Uppercase Letter");
    else if (ch >= 'a' && ch <= 'z')
    printf("Lowercase Letter");
    else if (ch >= '0' && ch <= '9')
    printf("Digit");
    else if (ch == ' ' || ch == '\n')
    printf("Whitespace");
    else
    printf("Special Character");
    return 0;
}