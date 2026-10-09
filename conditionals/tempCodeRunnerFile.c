#include <stdio.h>

int main() {
    int num, i, j, rows;
    unsigned long long fact = 1;

    // 1. Multiplication Table
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);
    printf("\n--- Multiplication Table of %d ---\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // 2. Factorial Calculation
    printf("\nEnter a number to find its factorial: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }

    // 3. Star Pattern (Nested Loops)
    printf("\nEnter number of rows for star pattern: ");
    scanf("%d", &rows);
    printf("\n--- Star Pattern ---\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}