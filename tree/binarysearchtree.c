#include "binarytree.h"

struct node* NewNode(int data)
{
    struct node* new = malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
}

int IsEmpty(struct node* root)
{
    if(root == NULL)
        return 1;
    
    return 0;
}

int Nodes(struct node* node)
{
    if(node == NULL)
        return 0;
    
    return 1 + Nodes(node->left) + Nodes(node->right);
}

void InOrder(struct node* node)
{
    if(node == NULL)
        return;

    InOrder(node->left);
    //process the node
    InOrder(node->right);
}

void PreOrder(struct node* node)
{
    if(node == NULL)
        return;

    //process the node
    PreOrder(node->left);
    PreOrder(node->right);
}

void PostOrder(struct node* node)
{
    if(node == NULL)
        return;

    PostOrder(node->left);
    PostOrder(node->right);
    //process the node
}

int Search(struct node* node, int data)
{
    if(node == NULL)
        return 0;
    if(data == node->data)
        return 1;
    if(data < node->data)
        return Search(node->left, data);
    if(data > node->data)
        return Search(node->right, data);
}

int Insert(struct node* node, int data)
{
    if(node == NULL)
    {
        node = NewNode(data);
        return 1;
    }

     if (data < node->data)
        node->left = Insert(node->left, data);
    else
        node->right = Insert(node->right, data);
}