#include <stdio.h>

int main() {
    // Print the header of the truth table
    printf("A  ~A\n");
    printf("-------\n");
    
    // Iterate over all possible values of A (0 and 1)
    for (int A = 0; A <= 1; A++) {
        // Compute the result of NOT A
        int result = !A;
        
        // Print the current value of A and its NOT result
        printf("%d   %d\n", A, result);
    }
    
    return 0;
}
