#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to convert binary string to integer
int binaryToInt(const char *binary) {
    int decimal = 0;
    while (*binary) {
        decimal = (decimal << 1) | (*binary++ - '0');
    }
    return decimal;
}

// Function to convert integer to binary string
void intToBinary(int num, char *binary) {
    int i = 0, j;
    if (num == 0) {
        binary[i++] = '0';
    } else {
        while (num > 0) {
            binary[i++] = (num % 2) + '0';
            num /= 2;
        }
        // Reverse the string
        for (j = 0; j < i / 2; j++) {
            char temp = binary[j];
            binary[j] = binary[i - j - 1];
            binary[i - j - 1] = temp;
        }
    }
    binary[i] = '\0';
}

// Function to multiply two binary numbers
void binaryMultiplication(const char *num1, const char *num2, char *result) {
    // Convert binary numbers to integers
    int intNum1 = binaryToInt(num1);
    int intNum2 = binaryToInt(num2);
    
    // Multiply the integers
    int product = intNum1 * intNum2;
    
    // Convert the product back to binary
    intToBinary(product, result);
}

int main() {
    char num1[101], num2[101], result[202]; // Ensure result array is large enough

    printf("Enter the first binary number: ");
    scanf("%100s", num1);

    printf("Enter the second binary number: ");
    scanf("%100s", num2);

    binaryMultiplication(num1, num2, result);

    printf("Product of two binary numbers: %s\n", result);

    return 0;
}
