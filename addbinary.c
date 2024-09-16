#include <stdio.h>
#include <string.h>

// Function to add two binary numbers
void binaryAddition(char num1[], char num2[], char result[]) {
    int i, carry = 0;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    
    // Make sure both numbers are the same length by padding with leading 0s
    int max_len = len1 > len2 ? len1 : len2;
    
    // Create arrays for the numbers padded with leading zeros
    char bin1[max_len + 1], bin2[max_len + 1];
    
    // Padding with leading zeros
    for (i = 0; i < max_len - len1; i++) bin1[i] = '0';
    for (i = 0; i < len1; i++) bin1[i + (max_len - len1)] = num1[i];
    bin1[max_len] = '\0';
    
    for (i = 0; i < max_len - len2; i++) bin2[i] = '0';
    for (i = 0; i < len2; i++) bin2[i + (max_len - len2)] = num2[i];
    bin2[max_len] = '\0';

    // Perform binary addition from right to left
    for (i = max_len - 1; i >= 0; i--) {
        int bit1 = bin1[i] - '0';
        int bit2 = bin2[i] - '0';
        int sum = bit1 + bit2 + carry;
        
        result[i + 1] = (sum % 2) + '0'; // Result bit (0 or 1)
        carry = sum / 2;                 // Carry for next position
    }
    
    // If there's a carry left, add it at the beginning
    result[0] = carry + '0';
    result[max_len + 1] = '\0';
    
    // Remove leading zero if any
    if (result[0] == '0') {
        for (i = 0; i <= max_len; i++) {
            result[i] = result[i + 1];
        }
    }
}

int main() {
    char num1[100], num2[100], result[101];
    
    printf("Enter the first binary number: ");
    scanf("%s", num1);
    
    printf("Enter the second binary number: ");
    scanf("%s", num2);
    
    binaryAddition(num1, num2, result);
    
    printf("Sum of twp binary numbers: %s\n", result);
    
    return 0;
}
