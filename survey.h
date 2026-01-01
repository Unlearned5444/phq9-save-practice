#ifndef SURVEY_H
#define SURVEY_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef char uint8;

extern int answer_one;
extern int answer_two;
extern int answer_three;
extern int answer_four;
extern int answer_five;
extern int answer_six;
extern int answer_seven;
extern int answer_eight;
extern int answer_nine;

extern char* answer_one_binary;
extern char* answer_two_binary;
extern char* answer_three_binary;
extern char* answer_four_binary;
extern char* answer_five_binary;
extern char* answer_six_binary;
extern char* answer_seven_binary;
extern char* answer_eight_binary;
extern char* answer_nine_binary;

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
uint8* byte_to_bits(uint8 the_byte);
uint8 bits_to_byte(uint8* ba);
char* byte_to_hex(uint8_t b);
uint8_t hex_to_byte(const char* h);
void print_bit_array8(uint8* ba);

#endif // SURVEY_H