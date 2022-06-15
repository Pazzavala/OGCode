#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

// making node type so we dont have to write (struct node ...)
typedef struct node node_t;

// Function to create new nodes
node_t* create_new_node(int value) { 			// return a pointer to the new node
	node_t *result = malloc(sizeof(node_t));	// Allocate size that result node pointer points to to a size of a node.
	result->value = value;						// Set the value to the location result points to 
	result->next = NULL;						// Set the next pointer to null
	return result;
}

// Inserting a new node at head
node_t* insert_at_head(node_t *head, node_t *node_to_insert) {
	node_to_insert->next = head;
	return node_to_insert;
}


void printlist(node_t *head) {
	node_t *temp = head;

	while (temp != NULL) {
		printf("%d - ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

int  main(int argc, char const *argv[])
{

	node_t *head = NULL;
	node_t *temp;

	for(int i = 0; i < 20; i++) {
		temp = create_new_node(i);
		temp->next = head;
		head = temp;
	}

	printlist(head);

	head = head->next;

	printlist(head);


	return 0;
}

