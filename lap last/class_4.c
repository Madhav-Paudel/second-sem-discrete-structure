// WAP to print truth table for tautology.(p and q)-->(p or q)
#include <stdio.h>
int main() {
    int p, q;
    
  
    printf("p\tq\t(p and q) -> (p or q)\n");
    printf("-------------------------------------\n");

    
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            // Calculate (p and q) and (p or q)
            int A= p && q;
            int B = p || q;
            
            // Calculate (p and q) -> (p or q), which is equivalent to !p_and_q || p_or_q
            int implication = !A || B;

            // Print the truth table row
            printf("%d\t%d\t%d\n", p, q, implication);
        }
    }

    return 0;
}
