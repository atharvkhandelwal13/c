#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    int marks[3];
} Student;

void findBestSubject(Student s);
void displayStudent(Student s);

int main() {
    Student s = {"Alice", 101, {90, 95, 85}};
    displayStudent(s);
    findBestSubject(s);
    return 0;
}

void findBestSubject(Student s) {
    int maxIndex = 0;

    for(int i = 1; i < 3; i++){
        if(s.marks[i] > s.marks[maxIndex]){
            maxIndex = i;
        }
    }

    if(maxIndex == 0) {
        printf("Best Subject: Math\n");
    } else if (maxIndex == 1) {
        printf("Best Subject: Science\n");
    } else {
        printf("Best Subject: English\n");
    }
}

void displayStudent(Student s) {
    printf("Student: %s\n", s.name);
}