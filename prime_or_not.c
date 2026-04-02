#include<stdio.h>

int is_prime(int n){
    if (n <= 1){
        return 0;
    }
    for( int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);

    result = is_prime(num);
    if(result == 1){
        printf("It is a prime number.\n");
    }
    else{printf("It is not a prime number.\n");}
    return 0;
}