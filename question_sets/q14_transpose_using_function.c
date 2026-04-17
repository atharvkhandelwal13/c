#include <stdio.h>

void transposeMatrix(int matrix[3][3]){
    int transpose[3][3];
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrix[i][j] = transpose[i][j];
        }
    }
}

int main(void){
    int mymatrix[3][3];
    
    printf("Enter the elements: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mymatrix[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", mymatrix[i][j]);
        }
        printf("\n");
    }

    transposeMatrix(mymatrix);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", mymatrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}