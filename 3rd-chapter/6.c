#include <stdio.h>

int main()
{
    int nom0, nom1, den0, den1;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &nom0, &den0, &nom1, &den1);

    printf("The sum is: %d/%d\n", nom0 * den1 + nom1 * den0, den0 * den1);
}
