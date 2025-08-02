#include <stdio.h>

int main()
{
    int n = 0, m = 1, d = 1, y = 1;
    float price = 0.0f;

    printf("Enter item number: ");
    scanf("%d", &n);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%d/%d/%d\n", n, price, m, d, y);
}
