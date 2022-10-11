#ifndef STACK
#define STACK

#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int IsEmpty(struct node* top);

int StackSize(struct node* top);

int Top(struct node* top);

int Push(struct node** top, int value);

int Pop(struct node** top);

#endif