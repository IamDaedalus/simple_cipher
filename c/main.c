#include "helpers.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

	if (argc == 3) {
		printf("%s\n", decipher(argv[1], argv[2]));
	}else {
		printf("Too many/little arguments, try again\n");
		return (-1);
	}

	return 0;
}
