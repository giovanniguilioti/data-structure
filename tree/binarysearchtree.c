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

int Search(struct node* node, int key)
{
    if(node == NULL)
        return 0;
    if(key == node->data)
        return 1;
    if(key < node->data)
        return Search(node->left, key);
    if(key > node->data)
        return Search(node->right, key);
}

struct node* Insert(struct node* node, int key)
{
    if(node == NULL)
        node = NewNode(key);

    if (key < node->data)
        node->left = Insert(node->left, key);
    else
        node->right = Insert(node->right, key);

    return node;
}

struct node* minValueNode(struct node* node)
{
    struct node* current = node;
 
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}

struct node* Delete(struct node* node, int key)
{
    if(node == NULL) return 0;

    if (key < node->data)
        node->left = Delete(node->left, key);
    else if(key > node->data)
        node->right = Delete(node->right, key);
    else
    {
        if(node->left == NULL)
        {
            struct node* temp = node->right;
            free(node);
            return temp;
        }
        else if(node->right == NULL)
        {
            struct node* temp = node->left;
            free(node);
            return temp;
        }

        struct node* temp = MinValueNode(node->right);

        node->data = temp->data;

        node->right = Delete(node->right, temp->data);
    }
    
    return node;
}