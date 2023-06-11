#include "helpers.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	(void)argc;
	(void)argv;

	printf("%c\n", rotate_char('a', -13));
	/*
	if (argc == 3) {
		printf("%s\n", encipher(argv[1], argv[2]));
	}else {
		printf("Too many/little arguments, try again\n");
		return (-1);
	}
	*/

	return 0;
}
