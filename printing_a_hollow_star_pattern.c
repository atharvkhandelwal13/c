#include<stdio.h>

int main(){
    int x;
    printf("Enter the number of rows: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){

        for(int space = 1; space < i; space++){
            printf(" ");
        }

        for(int j = 1; j <= (2 * x - ((2 * i)-1)); j++){
            if ( i==1 || j==1 || j == (2 * x - ((2 * i)-1))){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
