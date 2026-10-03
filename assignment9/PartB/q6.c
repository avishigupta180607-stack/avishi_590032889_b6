#include <stdio.h>

void arithmetic(int a, int b,
                int *sum, int *diff,
                long long *product, double *quotient) {
    *sum = a + b;
    *diff = a - b;
    *product = (long long)a * b;

    if (b != 0)
        *quotient = (double)a / b;
}

int main(void) {
    int a, b, sum, diff;
    long long product;
    double quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    arithmetic(a, b, &sum, &diff, &product, &quotient);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %lld\n", product);

    if (b != 0)
        printf("Quotient = %.2f\n", quotient);
    else
        printf("Division by zero is not possible.\n");

    return 0;
}