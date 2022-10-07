#ifndef LINKED_LIST
#define LINKED_LIST

#include<stdlib.h>

struct node
{
    int data;
    node_t next;
}
typedef struct node node_t;

int IsEmpty(node_t*);

int Size(node_t*);

#endif