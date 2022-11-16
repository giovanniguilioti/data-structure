#ifndef CIRCULAR_LINKED_LIST
#define CIRCULAR_LINKED_LIST

#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int IsEmpty(struct node* last);

int Size(struct node* last);

#endif