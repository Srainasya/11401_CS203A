#include <stdio.h>
#include <stdlib.h>

int main() {
    int **array;
    int n = 2, m = 5;

    // Allocate memory for n integers
    array = (int *) malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++){
        array[i] = (int *) malloc(m * sizeof(int));
    }

    // Print the starting memory address
    printf("Initial memory address: %p\n", (void*)array);
    printf("Initial memory end address  : %p\n", (void*)(array + n * sizeof(int) - 1));

    // Initialize elements
    int x = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            array[i][j] = x++;
        }
    }

    // Print elements
    printf("Initial array: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            printf("Index %d %d -> Value: %d, Address: %p\n", i,j, array[i][j], (void*)&array[i][j]);
        }
    }
    printf("\n");

    // Double the size
    n = n * 2;
    array = (int *) realloc(array, n * sizeof(int));
    if (array == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++){
        array[i] = (int *) malloc(m * sizeof(int));
    }

    // Print the new memory address
    printf("After realloc memory address: %p\n", (void*)array);
    printf("After realloc end address   : %p\n", (void*)(array + n * sizeof(n) - 1));
    
    // Initialize new elements
    x = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            array[i][j] = x++;
        }
    }

    // Print all elements
    printf("Resized array: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            printf("Index %d %d -> Value: %d, Address: %p\n", i,j, array[i][j], (void*)&array[i][j]);
        }
    }
    printf("\n");

    // Free memory
    free(array);
    return 0;
}
