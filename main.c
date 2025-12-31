#include <stdio.h>

void survey(int* answer, int question){

    char question_one[] = "Little interest or pleasure in doing things\n";
    char question_two[] = "Feeling down, depressed, or hopeless\n";
    char question_three[] = "Trouble falling or staying asleep, or sleeping too much\n";
    char question_four[] = "Feeling tired or having little energy\n";
    char question_five[] = "Poor appetite or overeating\n";
    char question_six[] = "Feeling bad about yourself; or that you are a failure or have let yourself or your family down\n";
    char question_seven[] = "Trouble concentrating on things, such as reading the newspaper or watching television\n";
    char question_eight[] = "Moving or speaking so slowly that other people could have noticed? Or the opposite; being so fidgety or restless that you have been moving around a lot more than usual\n";
    char question_nine[] = "Thoughts that you would be better off dead or of hurting yourself in some way\n";

    char options[] = "0 - Not at all\n1 - Several days\n2 - More than half the days\n3 - Nearly every day\n";

    if (question == 1) {
    printf("Over the last 2 weeks, how often have you been bothered by any of the following problems?\n\n");
    printf("%s%s\n", question_one, options);
    scanf("%d", answer);
    }
    else if (question == 2) {
    printf("%s%s\n", question_two, options);
    scanf("%d", answer);
    }
    else if (question == 3) {  
    printf("%s%s\n", question_three, options);
    scanf("%d", answer);
    }
    else if (question == 4) {
    printf("%s%s\n", question_four, options);
    scanf("%d", answer);
    }
    else if (question == 5) {
    printf("%s%s\n", question_five, options);
    scanf("%d", answer);
    }
    else if (question == 6) {
    printf("%s%s\n", question_six, options);
    scanf("%d", answer);
    }
    else if (question == 7) {
    printf("%s%s\n", question_seven, options);
    scanf("%d", answer);
    }
    else if (question == 8) {
    printf("%s%s\n", question_eight, options);
    scanf("%d", answer);
    }
    else if (question == 9) {
    printf("%s%s\n", question_nine, options);
    scanf("%d", answer);
    }
    };

void answer_set(int answer, char* answer_binary){

    switch(answer){
        case 0:
            answer_binary = "00";
            break;
        case 1:
            answer_binary = "01";
            break;
        case 2:
            answer_binary = "10";
            break;
        case 3:
            answer_binary = "11";
            break;
        default:
            printf("Invalid answer\n");
    }

};

int main(void){

    int answer_one;
    int answer_two;
    int answer_three;
    int answer_four;
    int answer_five;
    int answer_six;
    int answer_seven;
    int answer_eight;
    int answer_nine;

    char answer_one_binary;
    char answer_two_binary;
    char answer_three_binary;
    char answer_four_binary;
    char answer_five_binary;
    char answer_six_binary;
    char answer_seven_binary;
    char answer_eight_binary;
    char answer_nine_binary;

    int i = 1;

    for(i = 1; i <= 9; i++){
        if (i == 1) {
        survey(&answer_one, i);
        answer_set(answer_one, &answer_one_binary);}
        else if (i == 2) {
        survey(&answer_two, i);
        answer_set(answer_two, &answer_two_binary);}
        else if (i == 3) {
        survey(&answer_three, i);
        answer_set(answer_three, &answer_three_binary);}
        else if (i == 4) {
        survey(&answer_four, i);
        answer_set(answer_four, &answer_four_binary);}
        else if (i == 5) {
        survey(&answer_five, i);
        answer_set(answer_five, &answer_five_binary);}
        else if (i == 6) {
        survey(&answer_six, i);
        answer_set(answer_six, &answer_six_binary);}
        else if (i == 7) {
        survey(&answer_seven, i);
        answer_set(answer_seven, &answer_seven_binary);}
        else if (i == 8) {
        survey(&answer_eight, i);
        answer_set(answer_eight, &answer_eight_binary);}
        else if (i == 9) {
        survey(&answer_nine, i);
        answer_set(answer_nine, &answer_nine_binary);}
    }


    return 0;
}