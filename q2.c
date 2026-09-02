#include<stdio.h>

int main() {
    int a;
    float b, c1, c2;

    printf("Enter an integer number: ");
    scanf("%d", &a);

    printf("Enter a floating-point number:");
    scanf("%f", &b);

    printf("\nImplicit type conversion:\n");
    c1 = a + b;
    printf("Addition = %.2f\n", c1);

    printf("\nExplicit type conversion:\n");
    c2 = (float)a + b;
    printf("Addition = %.2f\n", c2);

    printf("\nImplicit type conversion:\n");
    c1 = a - b;
    printf("Subtraction = %.2f\n", c1);

    printf("\nExplicit type conversion:\n");
    c2 = (float)a - b;
    printf("Subtraction = %.2f\n", c2);

    printf("\nImplicit type conversion:\n");
    c1 = a * b;
    printf("Multiplication = %.2f\n", c1);

    printf("\nExplicit type conversion:\n");
    c2 = (float)a * b;
    printf("Multiplication = %.2f\n", c2);

    printf("\nImplicit type conversion:\n");
    c1 = a / b;
    printf("Division = %.2f\n", c1);

    printf("\nExplicit type conversion:\n");
    c2 = (float)a / b;
    printf("Division = %.2f\n", c2);

    return 0; 

}
