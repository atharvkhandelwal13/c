#include<stdio.h>

int main(void){
    int questions;
    char continue_eval;

    printf("Enter the number of questions: ");
    scanf("%d", &questions);

    char keys[questions+1];
    char student_name[50];
    char student_response[questions+1];

    printf("Input the answer key of the quiz.\n");
    printf("Keys = ");
    scanf("%s", keys);

    do{
        printf("\nInput the name of the student: ");
        scanf("%s", student_name);

        printf("\nInput the %s's response: ", student_name);
        scanf("%s", student_response);

        int score = 0;

        for(int i = 0; i < questions; i++){
            if(student_response[i] == '\0'){
                break;
            }
            if(student_response[i] == keys[i]){
                score++;
            }
        }

        printf("Marks obrained by %s is %d out of %d.\n\n", student_name, score, questions);

        printf("Do you want to evaluate marks for another student(Y/N): ");
        scanf(" %c", &continue_eval);
    }while (continue_eval == 'Y' || continue_eval == 'y');

    printf("Bye!\n");

    return 0;
}