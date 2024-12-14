// Write two C programs: one to calculate the factorial 
// of a number using recursion, and another to generate the Fibonacci sequence up to a given number using recursion.
// #include <stdio.h>

// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int num;

//     printf("Enter a non-negative integer: ");
//     scanf("%d", &num);

//     if (num < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         int result = factorial(num);
//         printf("Factorial of %d is %d\n", num, result);
//     }

//     return 0;
// }

// -------------------------------------------------------------------
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fibonacci sequence is not defined for negative numbers.\n");
    } else {
        printf("Fibonacci sequence up to %d:\n", num);
        for (int i = 0; i <= num; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}