//what is the leading digit of the integer entered as input
#include<stdio.h>

int leadingdigit(int a){
    while(a >= 10){
        a = a / 10;
    }
    return a;
}

int main(){
    int num, digit;
    printf("Enter the number: ");
    scanf("%d", &num);

    digit = leadingdigit(num);
    printf("The leading digit is %d\n", digit);
    return 0;
}