#include <stdio.h>

int main() {
    // Print the header of the truth table
    printf("P Q  (P^Q)--> (PVQ)\n");
    printf("--------------------------------------\n");
    
    // Iterate over all possible values of P and Q
    for (int P = 0; P <= 1; P++) {
        for (int Q = 0; Q <= 1; Q++) {
            // Compute P → P and Q → Q
            int P_imp_P = !(P) || P;  // P → P is always true
            int Q_imp_Q = !(Q) || Q;  // Q → Q is always true
            
            // Compute the result of (P → P) ∨ (Q → Q)
            int tautology = P_imp_P || Q_imp_Q;
            
            // Print the current values of P, Q, and the tautology result
            printf("%d %d     %d       %d              %d\n", P, Q, P_imp_P, Q_imp_Q, tautology);
        }
    }
    
    return 0;
}
