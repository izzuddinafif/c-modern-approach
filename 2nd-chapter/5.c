#include <stdio.h>

// a bit cheating hehe :p
int power(int x, int y)
{
    int res = 1;

    for (int i = 0; i < y; ++i) {
        res *= x;
    }
    printf("%d^%d = %d\n", x, y, res);
    return res;
}

int main()
{
    int x = 0;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6 = %d\n", (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - power(x, 2) + 7 * x - 6);
    return 0;
}
