#ifndef BINARY_TREE
#define BINARY_TREE

#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
}

int IsEmpty(struct node* root);

int Nodes(struct node* node);

void InOrder(struct node* node);

void PreOrder(struct node* node);

void PostOrder(struct node* node);

#endif