#include <stdio.h>
#include <stdlib.h>

int** createJaggedMarks(int nStudents, int* nExamsPerStudent);
void fillJaggedMarks(int** marks, int* nExamsPerStudent, int nStudents);
void printJaggedMarks(int** marks, int* nExamsPerStudent, int nStudents);
void freeJaggedMarks(int** marks, int nStudents);

int main() {
    int nStudents;
    printf("Enter number of students: ");
    scanf("%d", &nStudents);

    int* nExamsPerStudent = (int*)malloc(nStudents * sizeof(int));
    for (int i = 0; i < nStudents; i++) {
        printf("Enter number of exams for student %d: ", i + 1);
        scanf("%d", &nExamsPerStudent[i]);
    }

    int** marks = createJaggedMarks(nStudents, nExamsPerStudent);
    fillJaggedMarks(marks, nExamsPerStudent, nStudents);
    printJaggedMarks(marks, nExamsPerStudent, nStudents);
    freeJaggedMarks(marks, nStudents);
    free(nExamsPerStudent);

    return 0;
}

int** createJaggedMarks(int nStudents, int* nExamsPerStudent) {
    // TODO
    int** marks = (int**) malloc(nStudents * sizeof(int*));
    for(int i = 0; i < nStudents; i++){
        marks[i] = (int*)malloc(nExamsPerStudent[i] * sizeof(int));
    }
    return marks;
}
void fillJaggedMarks(int** marks, int* nExamsPerStudent, int nStudents) {
    // TODO
    for(int i = 0; i < nStudents; i++){
        printf("Enter marks for Student %d : ", i+1);
        for(int j = 0; j < nExamsPerStudent[i]; j++){
            scanf("%d", &marks[i][j]);
        }
    }
}

void printJaggedMarks(int** marks, int* nExamsPerStudent, int nStudents) {
    // TODO
    for(int i = 0; i < nStudents; i++){
        printf("Student %d: ", i+1);
        for(int j = 0; j < nExamsPerStudent[i]; j++){
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
}

void freeJaggedMarks(int** marks, int nStudents) {
    // TODO
    for(int i = 0; i < nStudents; i++){
        free(marks[i]);
    }
    free(marks);
}