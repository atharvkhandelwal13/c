#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    int marks[3];
} Student;

void swapStudents(Student* s1, Student* s2);

int main() {
    Student s1 = {"Alice", 10, {90, 91, 92}};
    Student s2 = {"Bob", 20, {80, 81, 82}};

    swapStudents(&s1, &s2);

    printf("Student 1: %s\n", s1.name);
    printf("Student 2: %s\n", s2.name);

    return 0;
}

void swapStudents(Student* s1, Student* s2) {
    Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}