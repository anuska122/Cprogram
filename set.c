#include <stdio.h>

// Function to compute the union of two sets
void union_sets(int set1[], int size1, int set2[], int size2) {
    int union_set[100], k = 0;

    // Copy all elements from set1 to union_set
    for (int i = 0; i < size1; i++) {
        union_set[k++] = set1[i];
    }

    // Add only elements from set2 that are not in set1
    for (int i = 0; i < size2; i++) {
        int found = 0;
        for (int j = 0; j < size1; j++) {
            if (set2[i] == set1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            union_set[k++] = set2[i];
        }
    }

    // Display the union of the sets
    printf(" The Union is: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", union_set[i]);
    }
    printf("\n");
}

// Function to compute the intersection of two sets
void intersection_sets(int set1[], int size1, int set2[], int size2) {
    int intersection_set[100], k = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (set1[i] == set2[j]) {
                intersection_set[k++] = set1[i];
                break;
            }
        }
    }

    // Display the intersection of the sets
    printf(" The Intersection is: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", intersection_set[i]);
    }
    printf("\n");
}

// Function to compute the difference of two sets (set1 - set2)
void difference_sets(int set1[], int size1, int set2[], int size2) {
    int difference_set[100], k = 0;

    for (int i = 0; i < size1; i++) {
        int found = 0;
        for (int j = 0; j < size2; j++) {
            if (set1[i] == set2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            difference_set[k++] = set1[i];
        }
    }

    // Display the difference of the sets
    printf("The Difference is: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", difference_set[i]);
    }
    printf("\n");
}

int main() {
    int set1[100], set2[100], size1, size2;

    // Input for first set
    printf("Enter size of  Set 1: ");
    scanf("%d", &size1);
    printf("Enter elements of Set 1: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &set1[i]);
    }

    // Input for second set
    printf("Enter size of Set 2: ");
    scanf("%d", &size2);
    printf("Enter elements of Set 2: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &set2[i]);
    }

    // Perform set operations
    union_sets(set1, size1, set2, size2);
    intersection_sets(set1, size1, set2, size2);
    difference_sets(set1, size1, set2, size2);

    return 0;
}
