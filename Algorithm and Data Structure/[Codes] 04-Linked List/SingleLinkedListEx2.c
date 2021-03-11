#include<stdio.h>
#include<malloc.h>

struct tnode
{
    int data;
    struct tnode *next;
};

int main()
{
    struct tnode *head, *node, *tail;
    int num;
    
    head = tail = NULL;
    scanf("%d", &num);
    
    while(num != 0)
    {
        node = (struct tnode*) malloc(sizeof(struct tnode));
        node->data = num;
        node->next = NULL;
        
        if(head == NULL)
            head = node;
        else
            tail->next = node;
        
        tail = node;
        
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
