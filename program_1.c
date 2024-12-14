// write a program in c programming to implement basic set operation:UNION,INTERSECTION AND DIFFERENCT
#include<stdio.h>
int main()
{
    int A[10];
    int B[10];
    int C[10];
    int D[10];
    int E[19];
    int n=10;
    int count=0;
    printf("enter the 5 arrays for A\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&A[i]);

    }
    printf("enter the 5 arrays for B\n");
    for(int i=0;i<5;i++)
     {
        scanf("%d",&B[i]);

    }
for(int i=0;i<5;i++)
{
    // putting the elements of A int C
    C[i]=A[i];

}
for(int i=0;i<5;i++)
{
   C[i+5]=B[i];
  
   }
//    putting c elements into the D section
   for(int i=0;i<10;i++)
   {
    D[i]=C[i];
   }
//    -------------------------------------for union section ---------------------------------
   for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(D[i] == D[j]) {
                // Shift elements to the left to remove the duplicate
                for(int k = j; k < n - 1; k++) {
                    D[k] = D[k + 1];
                }
                n--; // Decrease the size of the array
                j--;    // Stay at the same index to check for further duplicates
            }
        }
    }
 
    printf("\nunion section:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", D[i]);
    }
    printf("\n");

// -----------------------------------------------------------------------------
printf("\nintersection section\n");

 for(int i=0;i<10;i++)
     {
        for(int j=i+1;j<10;j++)
        if(C[i]==C[j])
        {
            printf("%d\n",C[i]);
        }
    }

// ========================================
    for (int i = 0; i < 5; i++) {
        int isDuplicate = 0; // Flag to check if A[i] is a duplicate

        // Check if A[i] is a duplicate in B
        for (int j = 0; j < 5; j++) {
            if (A[i] == B[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, add to E
        if (!isDuplicate) {
            E[count] = A[i];
            count++;
        }
    }

    printf("A-B is:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\n", E[i]);
    }


 }