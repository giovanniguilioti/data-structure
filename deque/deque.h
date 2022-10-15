#ifndef DEQUE
#define DEQUE

#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct deque
{
    struct node* front;
    struct node* rear;
};

struct deque* CreateDeque();

int IsEmpty(struct deque* deque);

int DequeSize(struct deque* deque);

#endif