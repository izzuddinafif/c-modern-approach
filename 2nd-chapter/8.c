#include <stdio.h>

int main()
{
    float loan = 0.0f, rate = 0.0f, payment = 0.0f;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    rate = rate / 100.0f / 12.0f;
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Balance remaining after first payment: %.2f\n", loan += loan * rate - payment);
    printf("Balance remaining after second payment: %.2f\n", loan += loan * rate - payment);
    printf("Balance remaining after third payment: %.2f\n", loan += loan * rate - payment);
}
