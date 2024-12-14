// Write a C program to find the greatest common divisor (GCD) of two integers using the Euclidean algorithm
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    result = gcd(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}