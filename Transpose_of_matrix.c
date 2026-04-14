#include<stdio.h>
int main(void){
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the entered matrix is: \n");
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}