#include <stdio.h>
#include "LinkedList.h"

int main() {
	Node *head = NULL;
	
	insertFirst(&head, 4);
	insertEnd(&head, 2);
	insertFirst(&head, 5);
	insertMiddle(&head, 3, 2);
	
	printList(head);
	deleteMiddle(&head,4);
	printf("\n");
	printList(head);
	
	return 1;
}

