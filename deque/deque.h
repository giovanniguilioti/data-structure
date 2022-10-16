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

int Front(struct deque* deque);

int Rear(struct deque* deque);

int InsertFront(struct deque* deque, int value);

int InsertRear(struct deque* deque, int value);

int DeleteFront(struct deque* deque);

int DeleteRear(struct deque* deque);

#endif