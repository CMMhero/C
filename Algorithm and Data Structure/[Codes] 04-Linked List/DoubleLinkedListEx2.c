#include<stdio.h>
#include<malloc.h>

struct tnode
{
    int data;
    struct tnode *next, *prev;
};

int main()
{
    struct tnode *head, *node, *tail;
    int num;
    
    head = NULL;
    scanf("%d", &num);
    
    while(num != 0)
    {
      node = (struct tnode*) malloc(sizeof(struct tnode));
      node->data = num;
      node->next = NULL;
      
      if(head == NULL)
      {
        node->prev = NULL;
        head = node;
      }
      else
      {
        tail->next = node;
        node->prev = tail;
      }
      
      tail = node;
      tail->next = NULL;

      scanf("%d", &num);
    } 
  
    printf("\nLinked List: ");
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
