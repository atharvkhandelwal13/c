#include<stdio.h>
#include<math.h>

int countdigits(int num){
    int count = 0;
    while(num > 0){
        count ++;
        num /= 10;
    }
    return count;
}

int IsArmstrong(int num){
    int original = num;
    int sum = 0;
    int n = countdigits(num);

    while(num > 0){
        int digit = num % 10;
        sum += pow(digit , n);
        num /= 10;
    }

    return (sum == original);
}

int main(){
    int start, end;
    printf("Enter two numbers(range): ");
    scanf("%d %d", &start, &end);

    printf("The Armstrong numbers between the range %d to %d is:", start, end);

    for(int i = start; i <= end; i++){
        if(IsArmstrong(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}