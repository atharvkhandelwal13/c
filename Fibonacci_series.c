#include<stdio.h>

int main(void){
    int n;
    printf("Enter the number of terms required for the Fibonacci series: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Please enter a positive integer.");
        return 1;
    }

    int arr[n];
    arr[0] = 0;
    if (n > 1){
        arr[1] = 1;
    }

    for(int i = 2; i < n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    printf("The Fibonacci series till n terms is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}