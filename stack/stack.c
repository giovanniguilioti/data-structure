#include "stack.h"

int IsEmpty(struct node* top)
{
    if(top == NULL)
        return 1;
    
    return 0;
}

int StackSize(struct node* top)
{
    if(top == NULL)
        return 0;

    struct node* temp = top->next;

    int i = 1;

    while(temp != NULL)
    {   
        temp = temp->next;
        ++i;
    }

    return i;
}

int Top(struct node* top)
{
    if(top == NULL)
        return 0;

    return top->data;
}