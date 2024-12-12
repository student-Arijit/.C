#include <stdio.h>
#include <stdlib.h>

// Function to create a 2D array dynamically
int** create_2D_array(int rows, int cols) {
    int** array = (int**)malloc(rows * sizeof(int*));
    if (array == NULL) {
        perror("Failed to allocate memory for rows");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(cols * sizeof(int));
        if (array[i] == NULL) {
            perror("Failed to allocate memory for columns");
            exit(EXIT_FAILURE);
        }
    }

    return array;
}

// Function to fill a 2D array with values
void fill_2D_array(int** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = (i + 1) * (j + 1); // Example: Fill with multiplication table
        }
    }
}

// Function to print a 2D array
void print_2D_array(int** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
}

// Function to free a 2D array
void free_2D_array(int** array, int rows) {
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
}

// Main function to demonstrate the 2D array operations
int main() {
    int rows = 5;
    int cols = 5;

    // Create and manage a 2D array
    int** myArray = create_2D_array(rows, cols);

    fill_2D_array(myArray, rows, cols);

    printf("2D Array:\n");
    print_2D_array(myArray, rows, cols);

    free(myArray);

    return 0;
}

