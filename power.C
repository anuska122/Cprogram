// Program to find the value of x^y without using POW function.

#include <stdio.h>

int main() {
    int x, y, i;
    double p = 1; // Use double to handle negative exponents correctly

    printf("Enter the base(x) and exponent(y): ");
    scanf("%d%d", &x, &y);

    if (y >= 0) {
        for (i = 0; i < y; ++i) {
            p *= x;
        }
    } else {
        for (i = 0; i < -y; ++i) { // -y to iterate correctly for negative exponents
            p /= x;
        }
    }

    printf("%d raised to the power of %d is %lf\n", x, y, p); // Use %lf to print double
    return 0;
}
