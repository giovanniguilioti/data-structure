#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* NewNode(int data);

int IsEmpty(struct node* root);

int Nodes(struct node* node);

void InOrder(struct node* node);

void PreOrder(struct node* node);

void PostOrder(struct node* node);

int Search(struct node* node, int key);

struct node* Insert(struct node* root, int key);

struct node* MinValueNode(struct node* node);

struct node* Delete(struct node* root, int key);

#endif