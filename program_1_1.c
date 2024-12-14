// Write a C program to implement the union, intersection, and complement operations on two fuzzy sets represented as arrays
#include <stdio.h>

#define MAX_E 100

int main() {
    double setA[MAX_E], setB[MAX_E], unionSet[MAX_E], intersectionSet[MAX_E], complementSet[MAX_E];
    int n;

    printf("Enter the number of elements in the sets: ");
    scanf("%d", &n);

    printf("Enter membership values for set A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &setA[i]);
    }

    printf("Enter membership values for set B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &setB[i]);
    }

    printf("Set A: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", setA[i]);
    }
    printf("\n");

    printf("Set B: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", setB[i]);
    }
    printf("\n");

    // Union
    printf("Union: ");
    for (int i = 0; i < n; i++) {
        unionSet[i] = (setA[i] > setB[i]) ? setA[i] : setB[i];
        printf("%.2f ", unionSet[i]);
    }
    printf("\n");

    // Intersection
    printf("Intersection: ");
    for (int i = 0; i < n; i++) {
        intersectionSet[i] = (setA[i] < setB[i]) ? setA[i] : setB[i];
        printf("%.2f ", intersectionSet[i]);
    }
    printf("\n");

    // Complement of A
    printf("Complement of A: ");
    for (int i = 0; i < n; i++) {
        complementSet[i] = 1.0 - setA[i];
        printf("%.2f ", complementSet[i]);
    }
    printf("\n");

    return 0;
}