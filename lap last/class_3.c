// wap to implement extended euclidean algorithm
#include <stdio.h>

int main() {
    int a, b, original_a, original_b, x, y, x1, y1, quotient, remainder;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Store original values of a and b
    original_a = a;
    original_b = b;

    // Initialize the coefficients for x and y
    x = 1, y = 0;
    x1 = 0, y1 = 1;

    while (b != 0) {
        quotient = a / b;
        remainder = a % b;

        a = b;
        b = remainder;

        // Update x and y using Extended Euclidean Algorithm
        int temp_x = x;
        x = x1;
        x1 = temp_x - quotient * x1;

        int temp_y = y;
        y = y1;
        y1 = temp_y - quotient * y1;
    }

    // Output the GCD and the coefficients
    printf("GCD(%d, %d) = %d\n", original_a, original_b, a);
    printf("Coefficients: x = %d, y = %d\n", x, y);

    return 0;
}