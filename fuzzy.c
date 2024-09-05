#include <stdio.h>

// Define the maximum number of elements in a fuzzy set
#define MAX_ELEMENTS 100

// Function to perform fuzzy union of two fuzzy sets
void fuzzy_union(float set1[], float set2[], float result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = (set1[i] > set2[i]) ? set1[i] : set2[i];
    }
}

// Function to perform fuzzy intersection of two fuzzy sets
void fuzzy_intersection(float set1[], float set2[], float result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = (set1[i] < set2[i]) ? set1[i] : set2[i];
    }
}

// Function to perform fuzzy complement of a fuzzy set
void fuzzy_complement(float set[], float result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = 1.0 - set[i];
    }
}

// Function to print a fuzzy set
void print_fuzzy_set(float set[], int size, const char* name) {
    printf("%s: ", name);
    for (int i = 0; i < size; i++) {
        printf("%.2f ", set[i]);
    }
    printf("\n");
}

int main() {
    int size;
    float set1[MAX_ELEMENTS], set2[MAX_ELEMENTS];
    float union_result[MAX_ELEMENTS], intersection_result[MAX_ELEMENTS], complement_result[MAX_ELEMENTS];

    // Input size of the fuzzy sets
    printf("Enter the number of elements in the fuzzy sets: ");
    scanf("%d", &size);

    // Input elements for the first fuzzy set
    printf("Enter membership function of first set: ");
    for (int i = 0; i < size; i++) {
        scanf("%f", &set1[i]);
    }

    // Input elements for the second fuzzy set
    printf("Enter membership function of second set: ");
    for (int i = 0; i < size; i++) {
        scanf("%f", &set2[i]);
    }

    // Perform fuzzy set operations
    fuzzy_union(set1, set2, union_result, size);
    fuzzy_intersection(set1, set2, intersection_result, size);
    fuzzy_complement(set1, complement_result, size);

    // Display results
    print_fuzzy_set(set1, size, "Fuzzy Set 1");
    print_fuzzy_set(set2, size, "Fuzzy Set 2");
    print_fuzzy_set(union_result, size, "The membership function of intersection=");
    print_fuzzy_set(intersection_result, size, "The membership function of Union=");
    print_fuzzy_set(complement_result, size, "The membership function of Complement of first set=");

    return 0;
}
