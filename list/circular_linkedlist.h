#ifndef CIRCULAR_LINKED_LIST
#define CIRCULAR_LINKED_LIST

#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int IsEmpty(struct node* head);

int Size(struct node* head);

int SearchElement(struct node* head, int value);

int ElementAt(struct node* head, int index);

int InsertBegin(struct node** head, int value);

int InsertAt(struct node** head, int index, int value);

int InsertEnd(struct node** head, int value);

#endif