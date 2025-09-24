#include<stdio.h>
#include<stdlib.h>

int main(){

    int *array;
    int n = 10;

    //Allocate memory for n integers
    array = (int *) malloc(n * sizeof(int));
    if (array == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    //Initialize elements
    for(int i = 0; i < n; i++) {
      array[i] = i + 1;
    }

    //Print elements
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    //Double Size
    n = n * 2;
    array = (int *) realloc(array, n * sizeof(int));
    if (array == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    // initialize new elements
    for (int i = n/2; i < n; i++) {
        array[i] = i + 1;   
    }

    //Print elements
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    //Free memory
    free(array);
    return 0;
}
