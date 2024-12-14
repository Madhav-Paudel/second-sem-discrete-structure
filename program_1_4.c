// Write a C program to perform bitwise AND and OR operations on two given integers and display the results in both binary and decimal formats.
#include <stdio.h>

int main() {
    int num1, num2, andResult, orResult;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Bitwise AND
    andResult = num1 & num2;

    printf("\nBitwise AND:\n");
    printf("Decimal: %d\n", andResult);
    printf("Binary: ");
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (andResult >> i) & 1);
    }
    printf("\n");

    // Bitwise OR
    orResult = num1 | num2;

    printf("\nBitwise OR:\n");
    printf("Decimal: %d\n", orResult);
    printf("Binary: ");
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (orResult >> i) & 1);
    }
    printf("\n");

    return 0;
}