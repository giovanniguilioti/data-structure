#include "deque.h"

struct deque* CreateDeque();
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