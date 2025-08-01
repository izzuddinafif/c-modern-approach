#include <stdio.h>

int main(void)
{
    int r = 0;
    printf("input sphere radius: ");
    scanf("%d", &r);
    printf("%f\n", 4.0f / 3.0f * 3.14f * r * r * r);
}
