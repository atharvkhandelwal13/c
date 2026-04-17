#include <stdio.h>
#include <string.h>

void copyString(char* dest, const char* src){
    strcpy(dest,src);
}

int main(void){
    char first[100];
    char second[100];

    printf("First: ");
    scanf("%99s", first);
    printf("Second: ");
    scanf("%99s", second);

    copyString(first, second);

    printf("After copying:\n");
    printf("First: %s\n", first);
    printf("Second: %s\n", second);

    return 0;
}