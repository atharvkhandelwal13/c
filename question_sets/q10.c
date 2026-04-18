#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

void addEmployee(Employee* empArr, int* count);
void displayEmployees(Employee* empArr, int count);

int main() {
    Employee employees[100];
    int count = 0;

    addEmployee(employees, &count);
    addEmployee(employees, &count);
    displayEmployees(employees, count);

    return 0;
}

void addEmployee(Employee* empArr, int* count) {
    printf("Enter the id of the empolyee: ");
    scanf("%d", &empArr[*count].id);

    printf("Enter the name of the empolyee: ");
    scanf("%s", empArr[*count].name);

    printf("Enter the salaray of the employee: ");
    scanf("%f", &empArr[*count].salary);

    (*count)++;
}

void displayEmployees(Employee* empArr, int count) {
    printf("\n--- Employee Directory ---\n");
    for(int i = 0; i < count; i++){
        printf("ID: %d, Name: %s, Salary: %.2f", empArr[i].id, empArr[i].name, empArr[i].salary);
        printf("\n");
    }
    printf("\n");
}