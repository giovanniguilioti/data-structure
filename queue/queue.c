#include "queue.h"

struct queue* CreateQueue()
{
    struct queue* new = malloc(sizeof(struct queue));
    new->front = new->rear = NULL;

    return new;
}

int IsEmpty(struct queue* queue)
{
    if(queue->front == NULL)
        return 1;
    
    return 0;
}

int QueueSize(struct queue* queue)
{
    if(queue->front == NULL)
        return 0;

    struct node* temp = queue->front;

    int i = 1;
    while(temp != NULL)
    {   
        temp = temp->next;
        ++i;
    }

    return i;
}

int EnQueue(struct queue* queue, int value)
{
    struct node* new = malloc(sizeof(struct node));
    if(new == NULL)
        return 0;
    
    new->data = value;
    new->next = NULL;
    
    if(queue->front == NULL)
    {
        queue->front = queue->rear = new;
        return 1;
    }

    queue->rear->next = new;
    q->rear = new;
    return 1;
}

int DeQueue(struct queue* queue)
{
    if(queue->front == NULL)
        return 0;

    struct node* temp = queue->front;

    q->front = q->front->next;
    if(q->front == NULL)
        q->rear = NULL;

    free(temp);
    return 1;
}