#include "search.h"

int search(int arr[], int size, int ele){
    for(int i = 0; i < size; i++){
        if(arr[i] == ele){
            return i+1;
        }
    }
    return -1;
}