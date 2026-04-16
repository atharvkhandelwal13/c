#include<stdio.h>
#include<stdlib.h>

int main(void){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int* arr = (int*) malloc(size * sizeof(int));
    
    printf("Enter %d numbers: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Array Elements: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    free(arr);
}