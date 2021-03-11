#include <stdio.h>
#include <malloc.h>

struct tnode {
	int data;
	struct tnode *next;
};

int main()
{
	struct tnode *head, *node, *tail;
	int num;
	
	head = tail = NULL; //Linked list empty
	scanf("%d", &num);
	
	while(num != 0) {
		//insert at the beginning
		node = (struct tnode*) malloc(sizeof(struct tnode));
		node->data = num;
		node->next = NULL;
		
		if(head == NULL)	//Linked list is empty
			node->next = NULL;
		else
			tail->next = node;
		
		tail = node;
		
		scanf("%d", &num);
	}
	
	printf("\nLinked list: ");
	node = head;
	while(node != NULL) {
		printf("%d ",node->data);
		node = node->next;
	}
	printf("\n");
	
	// MENGHAPUS SEMUA DATA
//	while(head != NULL) {
//		node = head;
//		head = head->next;
//		free(node);
//	}

	// MENGHAPUS DATA PALING AKHIR
	node = prePtr = head;
	while(node->next != NULL)
		node = node->next;
	while(prePtr->next != node)
		prePtr = prePtr->next;
		
	prePtr->next = NULL;
	free(node);
	
	return 0;
}

