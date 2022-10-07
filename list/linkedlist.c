#include "linkedlist.h"

int IsEmpty(node_t* head)
{
    if(head == NULL)
        return 1;

    return 0;
}

int ListSize(node_t* head)
{
    if(head == NULL)
        return 0;

    node_t* temp = head->next;

    int i = 1;
    while(temp != NULL)
    {   
        temp = temp->next;
        ++i;
    }

    return i;
}