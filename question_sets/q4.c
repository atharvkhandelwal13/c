#include<stdio.h>

void findMaxMin(int* arr, int n, int* max, int* min){
    for(int i = 0; i < n; i++){
        if(*(arr + i) > *max){
            *max = *(arr + i);
        }
        if(*(arr + i) < *min){
            *min = *(arr + i);
        }
    }
}

int main(void){
    int arr[] = {5, 10, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max, min;
    max = arr[0];
    min = arr[0];

    findMaxMin(arr, n, &max, &min);

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}