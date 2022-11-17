#include "binarytree.h"

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
    
    return 1 + Nodes(root->left) + Nodes(root->right);
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