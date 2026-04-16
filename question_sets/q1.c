#include<stdio.h>

typedef struct{
    char name[50];
    int roll;
    int marks[3];
}Student;

void displayAverage(Student s){
    float sum = s.marks[0] + s.marks[1] + s.marks[2];
    float avg = sum / 3.0; 

    printf("\nName: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Average: %.2f\n", avg);
}

int main(void){
    Student s1;
    printf("Name: ");
    scanf("%49s", s1.name); //Added 49 to prevent overflow.
    
    printf("Roll number: ");
    scanf("%d", &s1.roll);
    
    // Read marks into the specific array indices
    printf("Enter marks for Math: ");
    scanf("%d", &s1.marks[0]);
    
    printf("Enter marks for Science: ");
    scanf("%d", &s1.marks[1]);
    
    printf("Enter marks for English: ");
    scanf("%d", &s1.marks[2]);

    displayAverage(s1);

    return 0;
}