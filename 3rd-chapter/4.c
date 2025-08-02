#include <stdio.h>

int main()
{
    int n0 = 0, n1 = 0, n2 = 0;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &n0, &n1, &n2);

    printf("You entered %d.%d.%d\n", n0, n1, n2);
}
