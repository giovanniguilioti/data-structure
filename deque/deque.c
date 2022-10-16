#include "deque.h"

struct deque* CreateDeque()
{
    struct deque* new = malloc(sizeof(struct deque));
    new->front = new->rear = NULL;

    return new;
}

int IsEmpty(struct deque* deque)
{
    if(deque->front == NULL)
        return 1;
    
    return 0;
}

int DequeSize(struct deque* deque)
{
    if(deque->front == NULL)
        return 0;

    struct node* temp = deque->front;

    int i = 1;
    while(temp != NULL)
    {   
        temp = temp->next;
        ++i;
    }

    return i;
}

int Front(struct deque* deque)
{
    if(deque->front == NULL)
        return 0;
    
    return deque->front->data;
}

int Rear(struct deque* deque)
{
    if(deque->rear == NULL)
        return 0;
    
    return deque->rear->data;
}

int InsertFront(struct deque* deque, int value)
{
    struct node* new = malloc(sizeof(struct node));
    if(new == NULL)
        return 0;

    new->data = value;

    if(deque->front == NULL)
    {
        deque->front = new;
        deque->rear = deque->front;
        new->next = NULL;
        return 1;
    }

    new->next = deque->front;
    deque->front = new;
    return 1;
}

int InsertRear(struct deque* deque, int value)
{

    struct node* new = malloc(sizeof(struct node));
    if(new == NULL)
        return 0;

    new->data = value;
    new->next = NULL;

    if(deque->rear == NULL)
    {
        deque->rear = new;
        deque->front = deque->rear;
        return 1;
    }

    deque->rear->next = new;
    deque->rear = new;
    return 1;
}

int DeleteFront(struct deque* deque)
{
    if(deque->front == NULL)
        return 0;

    struct node* temp = deque->front;
    deque->front = deque->front->next;

    free(temp);

    if(deque->front == NULL)
        deque->rear = NULL;

    return 1;
}

int DeleteRear(struct deque* deque)
{
    if(deque->rear == NULL)
        return 0;

    if(deque->front == deque->rear)
    {
        free(deque->front);
        deque->front = deque->rear = NULL;
        return 1;
    }

    struct node* temp = deque->front;

    while(temp->next != deque->rear)
        temp = temp->next;

    deque->rear = temp;

    free(temp->next);

    deque->rear->next = NULL;
    return 1;
}