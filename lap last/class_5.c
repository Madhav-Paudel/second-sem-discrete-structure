// WAP to find the addition subtraction and multiplication of two binary number.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert binary string to integer
int binaryToInt(const char *binary) {
    return (int)strtol(binary, NULL, 2);
}

// Function to convert integer to binary string
void intToBinary(int num, char *binary) {
    int index = 0;
    while (num > 0) {
        binary[index++] = (num % 2) + '0';
        num /= 2;
    }
    binary[index] = '\0';
    // Reverse the string
    for (int i = 0; i < index / 2; i++) {
        char temp = binary[i];
        binary[i] = binary[index - i - 1];
        binary[index - i - 1] = temp;
    }
}

int main() {
    char binary1[32], binary2[32];
    char result[32];
    int num1, num2, sum, diff, prod;

    // Input two binary numbers
    printf("Enter first binary number: ");
    scanf("%s", binary1);
    printf("Enter second binary number: ");
    scanf("%s", binary2);

    // Convert binary strings to integers
    num1 = binaryToInt(binary1);
    num2 = binaryToInt(binary2);

    // Perform addition, subtraction, and multiplication
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Convert results back to binary strings
    intToBinary(sum, result);
    printf("Sum: %s\n", result);

    intToBinary(diff, result);
    printf("Difference: %s\n", result);

    intToBinary(prod, result);
    printf("Product: %s\n", result);
    return 0;
}
