#include "helpers.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

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

/*
 * ENDED UP NOT USING THIS BUT WE MIGHT COME BACK TO is_letter
 *
 *
 * str_to_lower - converts a string to lowercase
 * @str: the input string
 * Return: the lowercase version of the string
 *
char *str_to_lower(char *str) {
	char *s;

	if (str == NULL)
		return NULL;

	for (s = str; *s != '\0'; s++)
		*s = tolower(*s);

	return str;
}
*/

/**
 * rotate_char - rotates a character by the given rotation
 * @c: the character to rotate
 * @rot: the rotation value
 * Return: the rotated character in the alphabet
 */
char rotate_char(char c, int rot) {
	int alpha = 26;
	int ascii = 96;

	if (is_letter(c)) {
		if (rot < 0)
			return rotate_char(c, rot + alpha);

		return ((char_to_num(c) + rot) % alpha) + ascii;
	}

	return c;
}

/**
 * char_to_num - returns the numeric value of the letter in the alphabet
 * @ch: the input character
 * Return: the numeric value of the letter
 */
int char_to_num(const char ch) {
	return ch - 96;
}

/**
 * is_letter - checks if a character is a letter
 * @in: the input character
 * Return: true if the character is a letter, false otherwise
 */
bool is_letter(const char in) {
	return (in >= 'a' && in <= 'z');
}
