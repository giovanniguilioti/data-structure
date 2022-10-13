#ifndef QUEUE
#define QUEUE

#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct queue
{
    struct node* front;
    struct node* rear;
};

struct queue* CreateQueue();

int IsEmpty(struct queue* queue);

int QueueSize(struct queue* queue);

int EnQueue(struct queue* queue, int value);

#endif