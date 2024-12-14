#include <stdio.h>
// .Write a C program to calculate the permutation (nPr) and combination (nCr) of two given integers using factorial functions
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int permutation(int n, int r) {
    if (n < r || n < 0 || r < 0) {
        return -1; // Invalid input
    } else {
        return factorial(n) / factorial(n - r);
    }
}

int combination(int n, int r) {
    if (n < r || n < 0 || r < 0) {
        return -1; // Invalid input
    } else {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
}

int main() {
    int n, r, per, comb;

    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);

    per = permutation(n, r);
    if (per == -1) {
        printf("Invalid input for permutation.\n");
    } else {
        printf("Permutation (nPr) = %d\n", per);
    }

    comb = combination(n, r);
    if (comb == -1) {
        printf("Invalid input for combination.\n");
    } else {
        printf("Combination (nCr) = %d\n", comb);
    }

    return 0;
}