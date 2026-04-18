#include <stdio.h>
#include <stdlib.h>

int* mergeSortedArrays(int* arr1, int n1, int* arr2, int n2);

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int* merged = mergeSortedArrays(arr1, 3, arr2, 3);

    for (int i = 0; i < 6; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    free(merged);
    return 0;
}

int* mergeSortedArrays(int* arr1, int n1, int* arr2, int n2){
    int* merged = (int*) malloc((n1 + n2) * sizeof(int));

    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            merged[k] = arr1[i];
            i++;
            k++;
        }
        else{
            merged[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i < n1){
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while(j < n2){
        merged[k] = arr2[j];
        j++;
        k++;
    }

    return merged;
}
