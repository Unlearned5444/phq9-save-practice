#ifndef SURVEY_H
#define SURVEY_H

// Perfectly formed include guard
// Some people might frown on your inclusion of the stdlib.h and stdio.h directly in your header, and you really don't need them in your header. Consider moving them to survey.c

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef char uint8;


// Wonderful use of externs / separating header and translation units.
// This is good practice!
// Though for something this simple, it's probably not a good sign that you already have over 20 externs.
// You should at least turn your 9 answer variables into an array (int answers[9]).
// You could also make them uint8s instead of ints, which would make your life easier when doing binary stuff.
// Later, once you've got the binary all figured out, you could get rid of these answer variables altogether.

// In brief: extern uint8 answers[9] beats 9 lines of extern int decls.
extern int answer_one;
extern int answer_two;
extern int answer_three;
extern int answer_four;
extern int answer_five;
extern int answer_six;
extern int answer_seven;
extern int answer_eight;
extern int answer_nine;

// These char*s are bewildering. Get rid of them all.
// To store your binary, prefer something like uint8 binary_data[4].

extern char* answer_one_binary;
extern char* answer_two_binary;
extern char* answer_three_binary;
extern char* answer_four_binary;
extern char* answer_five_binary;
extern char* answer_six_binary;
extern char* answer_seven_binary;
extern char* answer_eight_binary;
extern char* answer_nine_binary;



// Do these question texts really need to be externed? Unless you're planning on using them in a file other than survey.h and survey.c, the answer is no.
// Only extern variables if you plan on accessing them from multiple places across files, or expect that there is a very good reason to suspect you or someone else would want to access them from other files.

extern char question_one[];
extern char question_two[];
extern char question_three[];
extern char question_four[];
extern char question_five[];
extern char question_six[];
extern char question_seven[];
extern char question_eight[];
extern char question_nine[];

extern char options[];

void print_separator_line();
void survey_admin(int* answer, int question);

void answer_set(int answer, char** answer_binary);
void review_answers();

// Remember, the instructions explicitly forbid the use of the byte_to_bits and bits_to_byte functions - remove them from the final project.
// Keep them around for reference as long as you need them.

uint8* byte_to_bits(uint8 the_byte);
uint8 bits_to_byte(uint8* ba);
char* byte_to_hex(uint8_t b);
uint8_t hex_to_byte(const char* h);
void print_bit_array8(uint8* ba);

#endif // SURVEY_H