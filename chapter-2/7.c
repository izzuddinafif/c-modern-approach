#include <stdio.h>

int main()
{
    int d = 0;
    printf("Enter dollar amount: ");
    scanf("%d", &d);
    printf("$20 bills: %d\n", d / 20);
    d %= 20;

    printf("$10 bills: %d\n", d / 10);
    d %= 10;

    printf("$5 bills: %d\n", d / 5);
    d %= 5;

    printf("$1 bills: %d\n", d);
}
