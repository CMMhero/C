#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
};

struct queue
{
  struct node *front;
  struct node *rear;
};

void create_queue(struct queue *);
struct queue *enqueue(struct queue *,int);
struct queue *dequeue(struct queue *);
int peek(struct queue *);
struct queue *display(struct queue *);
struct queue *q;

void create_queue(struct queue *q)
{
  q->rear = NULL;
  q->front = NULL;
}

struct queue *enqueue(struct queue *q,int val)
{
  struct node *ptr;
  ptr = (struct node*)malloc(sizeof(struct node));
  ptr->data = val;
  if(q->front == NULL)
  {
    q->front = ptr;
    q->rear = ptr;
    q->front->next = q->rear->next = NULL;
  }
  else
  {
    q->rear->next = ptr;
    q->rear = ptr;
    q->rear->next = NULL;
  }
  return q;
}

struct queue *dequeue(struct queue *q)
{
  struct node *ptr;
  ptr = q->front;
  if(q->front == NULL)
  printf("\n UNDERFLOW");
  else
  {
    q->front = q->front->next;
    printf("\n The value being deleted is : %d", ptr->data);
    free(ptr);
  }
  return q;
}

int peek(struct queue *q)
{
  if(q->front==NULL)
  {
     printf("\n QUEUE IS EMPTY");
     return -1;
  }
  else
     return q->front->data;
}

struct queue *display(struct queue *q)
{
  struct node *ptr;
  ptr = q -> front;
  if(ptr == NULL)
    printf("\n QUEUE IS EMPTY");
  else
  {
    printf("\n");
    while(ptr!=q -> rear)
    {
      printf("%d\t", ptr -> data);
      ptr = ptr -> next;
    }
    printf("%d\t", ptr -> data);
  }
  return q;
}

int main()
{
  int val, option;
  q = (struct queue*) malloc(sizeof(struct queue));
  create_queue(q);
  
  do
  {
    printf("\n *****MAIN MENU*****");
    printf("\n 1. Insert an element");
    printf("\n 2. Delete an element");
    printf("\n 3. Peek");
    printf("\n 4. Display the queue");
    printf("\n 5. EXIT");
    printf("\n Enter your option : ");
    scanf("%d", &option);
    switch(option)
    {
      case 1:
        printf("\n Enter the number to insert in the queue: ");
        scanf("%d", &val);
        q = enqueue(q,val);
        break;
      case 2:
        q = dequeue(q);
        break;
      case 3:
        val = peek(q);
        if(val != -1)
          printf("\n The value at front of queue is : %d", val);
        break;
      case 4:
        q = display(q);
        break;
    }
  } while(option != 5);
 
  return 0;
}