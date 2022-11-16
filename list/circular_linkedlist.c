#include "circular_linkedlist.h"

int IsEmpty(struct node* last)
{
    if(last == NULL)
        return 1;

    return 0;
}

int ListSize(struct node* last)
{
    if(last == NULL)
        return 0;

    struct node* temp = last->next;

    int i = 1;
    while(temp != NULL)
    {   
        temp = temp->next;
        ++i;
    }

    return i;
}