#include <stdio.h>

// Function to compute the Cartesian product of two sets
void cartesian_product(int set1[], int size1, int set2[], int size2) {
    printf("Cartesian Product:\n");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            printf("(%d, %d) ", set1[i], set2[j]);
        }
        printf("\n");
    }
}

int main() {
    int set1[100], set2[100], size1, size2;

    // Input for first set
    printf("How many elements do you want in set a?  ");
    scanf("%d", &size1);
    printf("Enter elements in set a: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &set1[i]);
    }

    // Input for second set
    printf("How many elements do you want in set b? ");
    scanf("%d", &size2);
    printf("Enter elements in set b: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &set2[i]);
    }

    // Perform Cartesian product
    cartesian_product(set1, size1, set2, size2);

    return 0;
}
