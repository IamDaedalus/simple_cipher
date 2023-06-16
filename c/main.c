#include "helpers.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i = 12999961;

	//printf("%c\n", rotate_char('n', -66));
/*	printf("'a' rotated 12999961 times is %c\n", rotate_char('a', i)); */
	printf("%s\n", encipher(argv[1], argv[2]));

	return 0;
}
