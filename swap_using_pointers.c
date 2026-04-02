//swapping values using pointers
#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b  = temp;
}

int main(void){
    int i = 5, j = 2;
    swap(&i, &j);
    printf("%d %d\n", i, j);
    return 0;
}