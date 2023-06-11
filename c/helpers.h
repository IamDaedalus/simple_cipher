#ifndef HELPERS_H
#define HELPERS_H

#include <stdbool.h>

#define ASCII_LOWER 97
#define ALPHA_COUNT 26

int sum_of_letter_nums(const char *);
int char_to_num(const char);
bool is_letter(const char);
char rotate_char(char, int);
char *str_to_lower(char *);
char *encipher(const char *, const char *);
char *decipher(const char *, const char *);

#endif
