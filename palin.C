// to check whether the entered word is pallindrome or not

#include <stdio.h>

int main() {
    int N, rem, rev = 0, temp;
    printf("Enter the value of N: ");
    scanf("%d", &N);  
    temp = N;
    while (N > 0) {
        rem = N % 10;
        rev = rev * 10 + rem;
        N = N / 10;
    }
    printf("Reversed number: %d\n", rev);
    if (temp == rev) {
        printf("%d is a palindrome\n", temp);
    } else {
        printf("%d is not a palindrome\n", temp);
    }
    return 0;
}
