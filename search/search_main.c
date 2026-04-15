#include <stdio.h>
#include "search.h"

int main(void){
    int arr[10] = {3,24,32,74,28,9,5,1,6,11};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    int x = 32;

    int eleIndex = search(arr, arrsize, x);
    if(eleIndex >= 0){
        printf("The element is found in the postion %d\n.", eleIndex);
    }
    else{
        printf("The element is not found.\n");
    }
}