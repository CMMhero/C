#include<stdio.h>
#include<malloc.h>

struct tnode
{
    int data;
    struct tnode *next, *prev;
};

int main()
{
    struct tnode *head, *tail, *node;
    int num;
    
    head = tail =  NULL;
    scanf("%d", &num);
    
    while(num != 0)
    {   //insert at the beginning
        node = (struct tnode*) malloc(sizeof(struct tnode));
        node->data = num;
        node->next = NULL;
        
        if(head == NULL)
        {
          node->next = NULL;
          tail = node;
        }
        else
        {
          head->prev = node;
          node->next = head;
        }
        
        head = node;
        head->prev = NULL;
        
        scanf("%d", &num);
    } 

    printf("\nLinked list print from Head: ");
    node = head;
    while(node != NULL)
    {
      printf("%d ", node->data);
      node = node->next;
    }
    printf("\n");

    printf("\nLinked list print from Tail: ");
    node = tail;
    while(node != NULL)
    {
      printf("%d ", node->data);
      node = node->prev;
    }
    printf("\n");

    //free from head
    /*while(head != NULL)
    {
        node = head;
        head = head->next;
        free(node);
    }*/

    //free from tail
    while(tail != NULL)
    {
      node = tail;
      tail = tail->prev;
      free(node);
    }
    
    return 0;
}
