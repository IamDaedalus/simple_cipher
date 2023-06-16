#include "helpers.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * sum_of_letter_nums - takes a string, converts each letter to a number, and
 * sums up each number, then returns the result
 * @str: the input string
 * Return: the sum of every letter as a number
 */
int sum_of_letter_nums(const char *str) {
	int i;
	int result = 0;

	if (str == NULL)
		return 0;

	for (i = 0; str[i] != '\0'; i++) {
		if (is_letter(str[i]))
			result += char_to_num(str[i]);
	}

	return result;
}

/**
 * str_to_lower - converts a string to lowercase
 * @str: the input string
 * Return: the lowercase version of the string
 */
char *str_to_lower(char *str) {
	int i;
	char *s = str ? malloc(sizeof(char) * strlen(str) + 1) : NULL;

	if (!s)
		return NULL;

	for (i = 0; str[i] != '\0'; i++)
		s[i] = tolower(str[i]);

	s[i] = '\0';

	return s;
}

/**
 * rotate_char - rotates a character by the given rotation
 * @c: the character to rotate
 * @rot: the rotation value
 * Return: the rotated character in the ALPHAbet
 */
char rotate_char(char c, int rot) {
	int rot_char;

	if (!isalpha(c))
		return c;

	rot_char = (c - ASCII_LOWER + rot) % ALPHA_COUNT;
	if (rot_char < 0)
		rot_char += ALPHA_COUNT;

	return rot_char + ASCII_LOWER;
}


/**
 * char_to_num - returns the numeric value of the letter in the ALPHAbet
 * @ch: the input character
 * Return: the numeric value of the letter
 */
int char_to_num(const char ch) {
	if (!is_letter(ch))
		return ch;

	return ch - 'a' + 1;
}

/**
 * is_letter - checks if a character is a letter
 * @in: the input character
 * Return: true if the character is a letter, false otherwise
 */
bool is_letter(const char in) {
	return (in >= 'a' && in <= 'z');
}
