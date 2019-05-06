// malloc space for an array of arrays

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *str = NULL;
	int length = 8;

	// leave space for null terminator
	str = malloc(sizeof(char) * (length + 1));

	strcpy(str, "Hunter");

	free(str);

	return 0;
}
