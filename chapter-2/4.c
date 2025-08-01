#include <stdio.h>

int main()
{
    float d = 0.0f;
    printf("Enter an amount: ");
    scanf("%f", &d);
    printf("With tax added: %.2f\n", d + (d * 5.0 / 100.0));
}
