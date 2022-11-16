#ifndef HEADER_LINKED_LIST
#define HEADER_LINKED_LIST

#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int IsEmpty(struct node* head);

int Size(struct node* head);

#endif