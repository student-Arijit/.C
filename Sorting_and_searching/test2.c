#include <stdio.h>
#include <stdlib.h>

// Function to input pairs of integers
void input_pairs(int** pairs, int num_pairs) {
    printf("Enter %d pairs of integers:\n", num_pairs);
    for (int i = 0; i < num_pairs; i++) {
        printf("Pair %d: ", i + 1);
        scanf("%d %d", &pairs[i][0], &pairs[i][1]);
    }
}

// Function to print pairs
void print_pairs(int** pairs, int num_pairs) {
    printf("You entered the following pairs:\n");
    for (int i = 0; i < num_pairs; i++) {
        printf("Pair %d: (%d, %d)\n", i + 1, pairs[i][0], pairs[i][1]);
    }
}

// Main function
int main() {
    int num_pairs;

    printf("Enter the number of pairs: ");
    scanf("%d", &num_pairs);

    // Allocate memory for pairs
    int** pairs = (int**)malloc(num_pairs * sizeof(int*));
    for (int i = 0; i < num_pairs; i++) {
        pairs[i] = (int*)malloc(2 * sizeof(int)); // Each pair has 2 integers
    }

    // Input and print pairs
    input_pairs(pairs, num_pairs);
    print_pairs(pairs, num_pairs);

    // Free allocated memory
    for (int i = 0; i < num_pairs; i++) {
        free(pairs[i]);
    }
    free(pairs);

    return 0;
}
