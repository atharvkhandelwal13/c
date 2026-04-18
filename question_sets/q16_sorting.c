#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
} Student;

void sortStudents(Student* arr, int n);

int main() {
    Student arr[] = {
        {20, "Charlie"},
        {10, "Bob"},
        {15, "Alice"}
    };
    int n = 3;

    sortStudents(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", arr[i].roll, arr[i].name);
    }

    return 0;
}

void sortStudents(Student* arr, int n) {
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if((arr[j].roll) > arr[j+1].roll){
                Student temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}