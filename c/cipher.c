#include "helpers.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char *encipher(char *key, char *input) {
	int key_len, input_len;
	int key_num, input_num, offset;
	char *result;
	int i;

	if (key == NULL || input == NULL)
		return NULL;

	key_len = strlen(key);
	input_len = strlen(input);

	key = str_to_lower(key);
	input = str_to_lower(input);

	result = malloc(sizeof(char) * (input_len + 1));
	if (result == NULL)
		return NULL;

	key_num = sum_of_letter_nums(key);
	input_num = sum_of_letter_nums(input);
	offset = key_len * (key_num + input_num);

	for (i = 0; i < input_len; i++) {
		result[i] = rotate_char(input[i], offset);
	}
	result[i] = '\0';

	return result;
}

char *decipher(char *key, char *input) {
    int key_len, input_len;
    int key_num, input_num, offset;
    char *result;
    int i;

    if (key == NULL || input == NULL)
        return NULL;

    key_len = strlen(key);
    input_len = strlen(input);

    key = str_to_lower(key);
    input = str_to_lower(input);

    result = malloc(sizeof(char) * (input_len + 1));
    if (result == NULL)
        return NULL;

    key_num = sum_of_letter_nums(key);
    input_num = sum_of_letter_nums(input);
    offset = key_len * (key_num + input_num);

    for (i = 0; i < input_len; i++) {
        result[i] = rotate_char(input[i], -(offset % 26));
    }
    result[i] = '\0';

    return result;
}



/*
char *decipher(char *key, char *input) {
	int key_len, input_len;
	int key_num, input_num, offset, key_and_input;
	int rr, mm;
	char *result;
	int i;

	if (key == NULL || input == NULL)
		return NULL;

	key_len = strlen(key);
	input_len = strlen(input);

	if (key_len == 0 || input_len == 0)
		return NULL;

	result = malloc(sizeof(char) * (input_len + 1));
	if (result == NULL)
		return NULL;

	key_num = sum_of_letter_nums(key);
	input_num = sum_of_letter_nums(input);
	key_and_input = (key_num + input_num) * key_len;

	rr = key_num - input_num;
	mm = key_and_input - rr;
	offset = (mm - ((mm % 26) * 26)) + 2;

	for (i = 0; i < input_len; i++) {
		result[i] = rotate_char(input[i], -offset);
	}
	result[i] = '\0';

	return result;
}
*/
