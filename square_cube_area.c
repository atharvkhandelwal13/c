#include<stdio.h>

void func(int n){
    int square = n*n;
    int cube = n*n*n;
    float area = 3.14 * n * n;

    printf("Square is %d\n", square);
    printf("Cube is %d\n", cube);
    printf("Area of the circle with radius %d is %.2f\n", n, area);
}

int main(){
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    func(n);
    return 0;
}