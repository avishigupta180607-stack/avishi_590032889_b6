#include <stdio.h>

int main() {
    int n, i, j, space, value;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print leading spaces for alignment (optional but looks better)
        for (space = 1; space <= n - i; space++)
            printf("  ");

        value = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}