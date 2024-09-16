#include <stdio.h>

int main() {
    // Print the header of the truth table
    printf("A B A V B\n");
    printf("---------\n");
    
    // Iterate over all possible values of A and B
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            // Compute the result of A OR B
            int result = A || B;
            
            // Print the current values of A, B, and their OR result
            printf("%d %d %d\n", A, B, result);
        }
    }
    
    return 0;
}
