#include <stdio.h>

// Function to compute the GCD using the Euclidean algorithm
int euclidean_algorithm(int a, int b) {
    int remainder;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2, gcd;

    // Input two numbers from the user
    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);

    // Ensure the numbers are positive
    if (num1 < 0 || num2 < 0) {
        printf("Error: Both numbers must be non-negative.\n");
        return 1;
    }

    // Compute the GCD
    gcd = euclidean_algorithm(num1, num2);

    // Output the result
    printf("The GCD of %d and %d is %d.\n", num1, num2, gcd);

    return 0;
}
