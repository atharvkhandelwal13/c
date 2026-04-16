#include<stdio.h>
#include<stdlib.h>

void reverseArray(int *arr, int n){
    int start = 0;
    int end = n-1;
    int temp;

    while(arr[start] < arr[end]){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(void){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        arr[i] = (i+1)*10;
    }
    
    printf("Original: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);
    
    printf("Reversed: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}