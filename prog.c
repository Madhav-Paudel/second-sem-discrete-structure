// write a program in c programming to implement basic set operation:UNION,INTERSECTION AND DIFFERENCE
#include<stdio.h>

int main() {
    char choose;
    int sizeA, sizeB;
    int A[100], B[100], C[100], D[100], E[100], count = 0;

    printf("Enter the size of Array A: ");
    scanf("%d", &sizeA);

    printf("Enter the size of Array B: ");
    scanf("%d", &sizeB);

    printf("Enter the %d elements for A:\n", sizeA);
    for(int i = 0; i < sizeA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the %d elements for B:\n", sizeB);
    for(int i = 0; i < sizeB; i++) {
        scanf("%d", &B[i]);
    }

    printf("Enter 'U' for UNION, 'I' for INTERSECTION, 'D' for DIFFERENCE: ");
    scanf(" %c", &choose); // Space before %c to ignore any whitespace characters

    int sizeC = sizeA + sizeB;

    // Merging A and B into C
    for(int i = 0; i < sizeA; i++) {
        C[i] = A[i];
    }
    for(int i = 0; i < sizeB; i++) {
        C[i + sizeA] = B[i];
    }

    switch (choose) {
        case 'U': {
            // Copying C to D for union operation
            for(int i = 0; i < sizeC; i++) {
                D[i] = C[i];
            }

            // Union operation - removing duplicates
            int n = sizeC;
            for(int i = 0; i < n; i++) {
                for(int j = i + 1; j < n; j++) {
                    if(D[i] == D[j]) {
                        for(int k = j; k < n - 1; k++) {
                            D[k] = D[k + 1];
                        }
                        n--;
                        j--;
                    }
                }
            }

            printf("\nUnion:\n");
            for(int i = 0; i < n; i++) {
                printf("%d ", D[i]);
            }
            printf("\n");
            break;
        }
        case 'I': {
            printf("\nIntersection:\n");
            for(int i = 0; i < sizeA; i++) {
                for(int j = 0; j < sizeB; j++) {
                    if(A[i] == B[j]) {
                        printf("%d ", A[i]);
                        break;
                    }
                }
            }
            printf("\n");
            break;
        }
        case 'D': {
            count = 0; // Reset count for difference calculation
            for(int i = 0; i < sizeA; i++) {
                int isDuplicate = 0;

                for(int j = 0; j < sizeB; j++) {
                    if(A[i] == B[j]) {
                        isDuplicate = 1;
                        break;
                    }
                }

                if(!isDuplicate) {
                    E[count] = A[i];
                    count++;
                }
            }

            printf("A-B:\n");
            for(int i = 0; i < count; i++) {
                printf("%d ", E[i]);
            }
            printf("\n");
            break;
        }
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
} 