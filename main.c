#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
typedef char uint8;
int answer_one;
int answer_two;
int answer_three;
int answer_four;
int answer_five;
int answer_six;
int answer_seven;
int answer_eight;
int answer_nine;

uint8 answer_one_binary;
uint8 answer_two_binary;
uint8 answer_three_binary;
uint8 answer_four_binary;
uint8 answer_five_binary;
uint8 answer_six_binary;
uint8 answer_seven_binary;
uint8 answer_eight_binary;
uint8 answer_nine_binary;

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
    };

}
void answer_set(int answer, uint8* answer_binary){

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
            print_separator_line();
            printf("Invalid answer\n");
            print_separator_line();
    }

};

void review_answers(){    printf("\n--- Review Your Answers ---\n");
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

uint8* byte_to_bits (uint8 the_byte)
{
    uint8* result = malloc (sizeof (uint8) * 8);

    // To retrieve the value of a bit at a given place, we need a number that has all zeros and one 1. The number 1 is the best for this, 00000001.
    // Then, we take the number that we're extracting (the_byte), and we move (shift) the bit we want to extract into that one's place.
    // >> 0 (no-op) would put the one's place of the number being examined into the one's place, >> 1 shifts the twos place to the ones place, and so on until the 128th place is in the one's place with >> 7.
    // Then anding guarantees that if the bit in our target number was 1, then we have 00000001, or 1
    // And if the bit at that place was 0, anding it with our 00000001 yields 00000000, or 0. So we know that the bit in that place in our target number was 0.



    for (int i = 0; i <= 7; i++)
    {
        result[i] = (the_byte >> i) & 1;

    }
    return result;
}
uint8  bits_to_byte (uint8* ba)
{
    uint8 result = 0;
    // This is very much the opposite of what we did in the above function.
    // In this case, we have an array where every number is all zeros except for the lsb, which is either 0 or 1.
    // So, we need to position each number in the array so that it will only be capable of manipulating the correct bit in our result number.
    // Ors are used for this, along with the left shift operator <<.
    // Think about it. Let's start by imagining that every one of the bits is one in the ba.
    // We start with result = 0, or 00000000.
    // Now, we take that number, and we take the first number in our ba, which as I said, we'll imagine is 00000001.
    // We'll shift the number at ba[0] by 0 (which is to say we'll do nothing)
    // 0 | 0 = 0, 0 | 0 = 0, 0 | 0 = 0, 0 | 0 = 0, 0 | 0 = 0, 0 | 0 = 0, 0 | 0 = 0, 0 | 1 = 1
    // Okay, so that's not super helpful, but it does do exactly what we want, so let's take ba[1] and left shift it by 1. That'll move the 1 from the ones place to the twos place and, importantly, fill in the missing one's place with a 0.
    // 0 | 0 = 0, 0 | 0 = 0, 0 | 0 = 0, 0 | 0 = 0, 0 | 0 = 0, 0 | 0 = 0, 0 | 1 = 1, 1 | 0 = 1
    // That would logically continue until every one of results bits are appropriately 1s. If we had a random 0 in there somewhere, it wouldn't matter. The 0 at that place in result would remain 0, because 0 | 0 = 0.

    for (int i = 0; i <= 7; i++)
    {
        result = result | (ba[i] << i);
        // I like using compound operator so that it's result |= (ba[i] << i)
        // Just so you don't have to write result twice.

    }
    return result;
}



char* byte_to_hex (uint8_t b)
{
    static char buf[3];
    sprintf (buf, "%02X", b);
    return buf;
}

uint8_t hex_to_byte (const char* h)
{
    uint8_t v = 0;
    for (int i = 0; i < 2; ++i)
    {
        v = (v << 4) | (h[i] > '9' ? h[i] - 'A' + 10 : h[i] - '0');
    }
    return v;
}

void print_bit_array8 (uint8* ba)
{
    // Print in reverse order so they show left to right (msb -> lsb)
    for (int i = 7; i >= 0; i--)
    {
        printf ("%d ", (int) ba[i]);
    }
    printf ("\n");
}

int main(void){

// Survey Loop
    int i = 1;

    for(i = 1; i <= 9; i++){
        if (i == 1) {
        survey_admin(&answer_one, i);
        answer_set(answer_one, &answer_one_binary);}
        else if (i == 2) {
        survey_admin(&answer_two, i);
        answer_set(answer_two, &answer_two_binary);}
        else if (i == 3) {
        survey_admin(&answer_three, i);
        answer_set(answer_three, &answer_three_binary);}
        else if (i == 4) {
        survey_admin(&answer_four, i);
        answer_set(answer_four, &answer_four_binary);}
        else if (i == 5) {
        survey_admin(&answer_five, i);
        answer_set(answer_five, &answer_five_binary);}
        else if (i == 6) {
        survey_admin(&answer_six, i);
        answer_set(answer_six, &answer_six_binary);}
        else if (i == 7) {
        survey_admin(&answer_seven, i);
        answer_set(answer_seven, &answer_seven_binary);}
        else if (i == 8) {
        survey_admin(&answer_eight, i);
        answer_set(answer_eight, &answer_eight_binary);}
        else if (i == 9) {
        survey_admin(&answer_nine, i);
        answer_set(answer_nine, &answer_nine_binary);}
    }
     review_answers(); 
     return 0;
}