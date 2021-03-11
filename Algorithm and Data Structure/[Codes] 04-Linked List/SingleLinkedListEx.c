#include<stdio.h>
#include<malloc.h>

struct tnode
{
  int data;
  struct tnode *next;
};

int main()
{
    struct tnode *head, *node;
    int num;
    
    head = NULL;//linked list is empty
    scanf("%d", &num);
    
    while(num != 0)
    {   //insert at the beginning
        node = (struct tnode*) malloc(sizeof(struct tnode));
        node->data = num;
        node->next = NULL;
        
        if(head == NULL)//linked list is empty
            node->next = NULL;
        else
            node->next = head;
        
        head = node;
        
        scanf("%d", &num);
    } 

    printf("\nLinked list: ");
    node = head;
    while(node != NULL)
    {
      printf("%d ", node->data);
      node = node->next;
    }
    printf("\n");

    while(head != NULL)
    {
      node = head;
      head = head->next;
      free(node);
    }
    
    return 0;
}
