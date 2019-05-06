// dynamically allocating memory for a struct

#include <stdio.h>
#include <stdlib.h>

// define struct
typedef struct Coordinate {
	int row;
	int col;
} Coordinate;

int main(void) {
	// init struct
	Coordinate *tmp1, *tmp2;

	// malloc and calloc some space for the struct
	tmp1 = malloc(sizeof(Coordinate));
	tmp2 = calloc(1, sizeof(Coordinate));

	if(tmp1 == NULL || tmp2 == NULL) {
		free(tmp1);
		free(tmp2);
	}

	free(tmp1);
	free(tmp2);

	return 0;
}
