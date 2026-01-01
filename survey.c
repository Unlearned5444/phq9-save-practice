#include "survey.h"

int answer_one;
int answer_two;
int answer_three;
int answer_four;
int answer_five;
int answer_six;
int answer_seven;
int answer_eight;
int answer_nine;

char* answer_one_binary;
char* answer_two_binary;
char* answer_three_binary;
char* answer_four_binary;
char* answer_five_binary;
char* answer_six_binary;
char* answer_seven_binary;
char* answer_eight_binary;
char* answer_nine_binary;

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

void print_separator_line(){
    printf("\n");
    for (int a = 1; a <= 80; a++ ) {
        printf ( "-" );
    };
    printf("\n");
}

void survey_admin(int* answer, int question){
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
    if (*answer < 0 || *answer > 3) {
        print_separator_line();
        printf("Invalid answer. Please enter a number between 0 and 3.");
        print_separator_line();
        survey_admin(answer, question);
    }
}

void answer_set(int answer, char** answer_binary){
    switch(answer){
        case 0:
            *answer_binary = "000";
            break;
        case 1:
            *answer_binary = "001";
            break;
        case 2:
            *answer_binary = "010";
            break;
        case 3:
            *answer_binary = "011";
            break;
        default:
            print_separator_line();
            printf("Invalid answer\n");
            print_separator_line();
    }
}

void review_answers(){
    printf("\n--- Review Your Answers ---\n");
    printf("Question 1:\nQ: %sA: %d\n", question_one, answer_one);
    printf("Question 2:\nQ: %sA: %d\n", question_two, answer_two);
    printf("Question 3:\nQ: %sA: %d\n", question_three, answer_three);
    printf("Question 4:\nQ: %sA: %d\n", question_four, answer_four);
    printf("Question 5:\nQ: %sA: %d\n", question_five, answer_five);
    printf("Question 6:\nQ: %sA: %d\n", question_six, answer_six);
    printf("Question 7:\nQ: %sA: %d\n", question_seven, answer_seven);
    printf("Question 8:\nQ: %sA: %d\n", question_eight, answer_eight);
    printf("Question 9:\nQ: %sA: %d\n", question_nine, answer_nine);

    char review_choice;
    printf("\nDo you want to change any answers? (y/n): ");
    scanf(" %c", &review_choice);

    if (review_choice == 'y' || review_choice == 'Y') {
        int change_q;
        do {
            printf("Enter the number of the question to change (1-9), or 0 to finish: ");
            scanf("%d", &change_q);
            if (change_q >= 1 && change_q <= 9) {
                if (change_q == 1) {
                    survey_admin(&answer_one, 1);
                    answer_set(answer_one, &answer_one_binary);
                } else if (change_q == 2) {
                    survey_admin(&answer_two, 2);
                    answer_set(answer_two, &answer_two_binary);
                } else if (change_q == 3) {
                    survey_admin(&answer_three, 3);
                    answer_set(answer_three, &answer_three_binary);
                } else if (change_q == 4) {
                    survey_admin(&answer_four, 4);
                    answer_set(answer_four, &answer_four_binary);
                } else if (change_q == 5) {
                    survey_admin(&answer_five, 5);
                    answer_set(answer_five, &answer_five_binary);
                } else if (change_q == 6) {
                    survey_admin(&answer_six, 6);
                    answer_set(answer_six, &answer_six_binary);
                } else if (change_q == 7) {
                    survey_admin(&answer_seven, 7);
                    answer_set(answer_seven, &answer_seven_binary);
                } else if (change_q == 8) {
                    survey_admin(&answer_eight, 8);
                    answer_set(answer_eight, &answer_eight_binary);
                } else if (change_q == 9) {
                    survey_admin(&answer_nine, 9);
                    answer_set(answer_nine, &answer_nine_binary);
                }
            } else if (change_q != 0) {
                print_separator_line();
                printf("Invalid question number. Please enter 1-9 or 0.");
                print_separator_line();
            }
        } while (change_q != 0);

        printf("\n--- Updated Answers ---\n");
        printf("Question 1:\nQ: %sA: %d\n", question_one, answer_one);
        printf("Question 2:\nQ: %sA: %d\n", question_two, answer_two);
        printf("Question 3:\nQ: %sA: %d\n", question_three, answer_three);
        printf("Question 4:\nQ: %sA: %d\n", question_four, answer_four);
        printf("Question 5:\nQ: %sA: %d\n", question_five, answer_five);
        printf("Question 6:\nQ: %sA: %d\n", question_six, answer_six);
        printf("Question 7:\nQ: %sA: %d\n", question_seven, answer_seven);
        printf("Question 8:\nQ: %sA: %d\n", question_eight, answer_eight);
        printf("Question 9:\nQ: %sA: %d\n", question_nine, answer_nine);
    }
}

uint8* byte_to_bits(uint8 the_byte)
{
    uint8* result = malloc(sizeof(uint8) * 8);
    for (int i = 0; i <= 7; i++)
    {
        result[i] = (the_byte >> i) & 1;
    }
    return result;
}

uint8 bits_to_byte(uint8* ba)
{
    uint8 result = 0;
    for (int i = 0; i <= 7; i++)
    {
        result |= (ba[i] << i);
    }
    return result;
}

char* byte_to_hex(uint8_t b)
{
    static char buf[3];
    sprintf(buf, "%02X", b);
    return buf;
}

uint8_t hex_to_byte(const char* h)
{
    uint8_t v = 0;
    for (int i = 0; i < 2; ++i)
    {
        v = (v << 4) | (h[i] > '9' ? h[i] - 'A' + 10 : h[i] - '0');
    }
    return v;
}

void print_bit_array8(uint8* ba)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", (int)ba[i]);
    }
    printf("\n");

    // To Do: Hex encode binary answers 
}