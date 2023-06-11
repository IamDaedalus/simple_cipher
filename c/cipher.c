#include "helpers.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char *encipher(const char *key, const char *input) {
	int key_len, input_len;
	int key_num, input_num, offset;
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
	offset = key_len * (key_num + input_num);

	for (i = 0; i < input_len; i++) {
		result[i] = rotate_char(input[i], offset);
	}
	result[i] = '\0';

	return result;
}

char *decipher(const char *key, const char *input) {
	int key_len, input_len;
	int key_num, input_num, offset;
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
	offset = key_len * (key_num + input_num);

	for (i = 0; i < input_len; i++) {
		result[i] = rotate_char(input[i], -offset);
	}
	result[i] = '\0';

	return result;
}
