//can the number taken as input be represented as sum of two prime numbers
#include<stdio.h>
int checkprime(int n){
    int isprime = 1;
    if(n == 0 || n == 1){
        isprime = 0;
    }
    else{
        for(int i = 2; i <= n/2; i++){
            if(n % i == 0){
                isprime = 0;
                break;
            }
        }
    }
    return isprime;
}

int main(){
    int num, i;
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; i++){
        if(checkprime(i) == 1 && checkprime(num - i) == 1){
            printf("%d = %d + %d\n", num, i, num-i);
            flag = 1;
        }
    }

    if(flag == 0){
        printf("%d can not be represented as sum of two prime numbers.", num);
    }
    return 0;
}