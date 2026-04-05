//decimal to binary 
#include <stdio.h>

long long int decimaltobinary(int n){
    long long int binary = 0;
    long long int placevalue = 1;
    int remainder;

    if(n == 0) return 0;

    while(n > 0){
        remainder = n % 2;
        binary += remainder * placevalue;
        n = n / 2;
        placevalue = placevalue * 10;
    }
    return binary;
}
int main(){
    int input = 65;
    long long int result;
    result = decimaltobinary(input);

    printf("Binary form of the decimal number %d is %lld\n", input, result);
    return 0;
}