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