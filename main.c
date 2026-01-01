#include "survey.h"

int main(void){

    // To Do: Prompt user to indicate if they've taken the survey before
    // To Do: If yes, load previous answers using hex decoding  

    // Survey Loop
    int i = 1;

    for(i = 1; i <= 9; i++){
        if (i == 1) {
            survey_admin(&answer_one, i);
            answer_set(answer_one, &answer_one_binary);
        }
        else if (i == 2) {
            survey_admin(&answer_two, i);
            answer_set(answer_two, &answer_two_binary);
        }
        else if (i == 3) {
            survey_admin(&answer_three, i);
            answer_set(answer_three, &answer_three_binary);
        }
        else if (i == 4) {
            survey_admin(&answer_four, i);
            answer_set(answer_four, &answer_four_binary);
        }
        else if (i == 5) {
            survey_admin(&answer_five, i);
            answer_set(answer_five, &answer_five_binary);
        }
        else if (i == 6) {
            survey_admin(&answer_six, i);
            answer_set(answer_six, &answer_six_binary);
        }
        else if (i == 7) {
            survey_admin(&answer_seven, i);
            answer_set(answer_seven, &answer_seven_binary);
        }
        else if (i == 8) {
            survey_admin(&answer_eight, i);
            answer_set(answer_eight, &answer_eight_binary);
        }
        else if (i == 9) {
            survey_admin(&answer_nine, i);
            answer_set(answer_nine, &answer_nine_binary);
        }
    }
    review_answers();
    return 0;
}