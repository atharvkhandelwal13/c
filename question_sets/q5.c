#include<stdio.h>

typedef struct{
    char title[50];
    char Author[50];
    float price;
} Book;

void displayAffordableBooks(Book books[], int n, float threshold){
    printf("\nBooks cheaper than %.2f:\n", threshold);

    for(int i = 0; i < n; i++){
        if (books[i].price < threshold){
            printf("- %s by %s: %.2f\n", books[i].title, books[i].Author, books[i].price);
        }
    }
}

int main(void){
    float price;
    Book invertory[5] = {
        {"Dark Matter", "Blake Crouch", 600.00},
        {"C Programming", "Dennis", 250.00},
        {"Learn Data Structures", "John", 199.00},
        {"Silent Patient", "Alex", 600.00},
        {"Atomic Habits","'James", 600.00}
    };

    printf("Enter the price threshold: ");
    scanf("%f", &price);

    displayAffordableBooks(invertory, 5, price);

    return 0;
}