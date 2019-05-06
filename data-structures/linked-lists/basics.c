// malloc space for a new node

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} node;

node *create_node(int data) {
	node *ptr = malloc(sizeof(node));

	if(ptr == NULL)
		exit(1);

	ptr->data = data;
	ptr->next = NULL;

	return ptr;
}

int main(void) {


	return 0;
}
