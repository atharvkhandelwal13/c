#include<stdio.h>

int main(void){
    float arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%f", &arr[i]);
    }

    float max, min;
    max = arr[0];
    min = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max is %.2f\nMin is %.2f\n", max, min);

    float secondmax, secondmin;
    secondmax = min;
    secondmin = max;
    for(int i = 0; i < 10; i++){
        if(arr[i] > secondmax && arr[i] < max){
            secondmax = arr[i];
        }
        if(arr[i] > min && arr[i] < secondmin){
            secondmin = arr[i];
        }
    }

    printf("Second Max is %.2f\nSecond Min is %.2f\n", secondmax, secondmin);
    return 0;
}