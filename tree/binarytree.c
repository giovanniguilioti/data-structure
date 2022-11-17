#include "binarytree.h"

int IsEmpty(struct node* root)
{
    if(root == NULL)
        return 1;
    
    return 0;
}

int Nodes(struct node* root)
{
    if(root == NULL)
        return 0;
    
    return 1 + Nodes(root->left) + Nodes(root->right);
}