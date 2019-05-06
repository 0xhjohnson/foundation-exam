// dynamically allocate memory for an array

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n = 10, *a = NULL;

	a = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		a[i] = i * 10;
	}

	for (i = 0; i < n; i++) {
		printf("n[%d]: %d\n", i, a[i]);
	}
	
	free(a);

	return 0;
}
