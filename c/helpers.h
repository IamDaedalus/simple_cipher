#ifndef HELPERS_H
#define HELPERS_H

#include <stdbool.h>

int sum_of_letter_nums(const char *);
int char_to_num(const char);
bool is_letter(const char);
char rotate_char(char, int);
char *str_to_lower(char *);
char *encipher(const char *, const char *);
char *decipher(char *, char *);

#endif
