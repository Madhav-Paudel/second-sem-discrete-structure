// Write a C program to implement logical implication for two Boolean variables. 
// The program should display the truth table for the implication operation.

#include <stdio.h>

int main() {
    int p, q, implication;

    printf("Truth Table for Logical Implication (p -> q)\n\n");
    printf("p\tq\tp -> q\n");
    printf("------------------------\n");

    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            implication = (p == 1 && q == 0) ? 0 : 1;
            printf("%d\t%d\t%d\n", p, q, implication);
        }
    }

    return 0;
}