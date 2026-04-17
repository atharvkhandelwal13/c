#include<stdio.h>
#include<stdlib.h>

int* resizeArray(int* arr, int old_size, int new_size){
    int* new_arr = (int*) realloc(arr, new_size * sizeof(int));

    if(new_arr == NULL){
        printf("Memory reallocation failed!");
        exit(1);
    }

    return new_arr;
}

int main(void){
    int initial_size, new_size;
    printf("Initial size: ");
    scanf("%d", &initial_size);

    int* arr = (int*) malloc(initial_size * sizeof(int));
    if(arr == NULL){
        return 1;
    }

    printf("Elements: ");
    for(int i = 0; i < initial_size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Resize to: ");
    scanf("%d", &new_size);

    arr = resizeArray(arr, initial_size, new_size);

    printf("New elements: ");
    for(int i = initial_size; i < new_size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Final array: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL; 

    return 0;
}