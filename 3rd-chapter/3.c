#include <stdio.h>

int main()
{
    int gsi = 0, g = 0, p = 0, n = 0, d = 0;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &g, &p, &n, &d);
    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", g);
    printf("Publisher code: %d\n", p);
    printf("Item number: %d\n", n);
    printf("Check digit: %d\n", d);
}
