// dynamically allocate space for 2d array
// requires a double int pointer

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, users = 10, data = 15;
	int **array;

	array = malloc(sizeof(int *) * users);

	for (i = 0; i < users; i++) {
		array[i] = malloc(sizeof(int) * data);
	}

	for (i = 0; i < users; i++) {
		free(array[i]);
	}

	free(array);

	return 0;
}
