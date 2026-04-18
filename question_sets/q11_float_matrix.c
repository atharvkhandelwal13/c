#include <stdio.h>
#include <stdlib.h>

float** createMatrix(int rows, int cols);
void fillMatrix(float** mat, int rows, int cols);
float sumMatrix(float** mat, int rows, int cols);
void freeMatrix(float** mat, int rows);

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    float** mat = createMatrix(rows, cols);
    fillMatrix(mat, rows, cols);
    printf("Sum = %.2f\n", sumMatrix(mat, rows, cols));
    freeMatrix(mat, rows);

    return 0;
}

float** createMatrix(int rows, int cols) {
    float** matrix = (float**) malloc(rows * sizeof(float*));
    for(int i = 0; i < rows; i++){
        matrix[i] = (float*) malloc(cols * sizeof(float));
    }
    return matrix;
}

void fillMatrix(float** mat, int rows, int cols) {
    // TODO
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%f", &mat[i][j]);
        }
    }
}

float sumMatrix(float** mat, int rows, int cols) {
    float sum = 0.0; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

void freeMatrix(float** mat, int rows) {
    for (int i = 0; i < rows; i++) {
        free(mat[i]);
    }
    free(mat);
}