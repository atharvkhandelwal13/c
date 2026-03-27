#include<stdio.h>
int main(){

    int option;
    float temp, newtemp;

    printf("1: Degree Celsius to Degree Fahrenheit\n2: Degree Fahrenheit to Degree Celsius\n3: Quit the program execution\n");

    while(1){
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:

        do{
            printf("Enter the temperature value greater than -273.15 deg. C: ");
            scanf("%f", &temp);
        } while(temp <= -273.15);
        newtemp = (temp * 9.0/5.0) + 32;
        printf("The temperature in Fahrenheit is %.2f deg. F\n", newtemp);
        break;
    
    case 2:
        do{
            printf("Enter the temperature value greater than -459.67 deg. F: ");
            scanf("%f", &temp);
        } while(temp <= -459.67);
        newtemp = (temp - 32) * 5.0/9.0;
        printf("The temperature in Celsius is %.2f deg. C\n", newtemp);
        break;

    case 3:
        printf("Quitting the program\n");
        return 0;

    default:
        printf("Invalid input\nTry again\n");
        break;
    }
    }

    return 0;
}