#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
}

int IsEmpty(struct node* root);

int Nodes(struct node* root);

#endif