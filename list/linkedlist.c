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

int SearchElement(node_t* head, int value)
{
    if(IsEmpty(head))
        return -1;

    node_t* temp = head;
    int i = 0;
    while(temp != NULL)
    {
        if(temp->data == value)
            return i;
        
        temp = temp->next;
        ++i;
    }

    return -1;
}

int ElementAt(node_t* head, int index)
{
    if(IsEmpty(head))
        return 0;

    if(index >= ListSize(head))
        return 0;

    node_t* temp = head;
    int i = 0;
    while(i < index)
    {
        temp = temp->next;
        ++i;
    }
    
    return temp->data;
}

int InsertBegin(node_t* head, int value)
{
    node_t* new = malloc(sizeof(node_t));
    if(new == NULL)
        return 0;

    new->data = value;
    new->next = head;
    head = new;

    return 1;
}

int InsertAt(node_t* head, int index, int value)
{
    if(index < 0 || index >= ListSize(head))
        return 0;

    node_t* new = malloc(sizeof(node_t));
    if(new == NULL)
        return 0;

    new->data = value;
    new->next = NULL;

    node_t* temp = head;
    int i = 0;
    while(i < index)
    {
        temp = temp->next;
    }

    new->next = temp->next;
    temp->next = new;
    return 1;
}

int InsertEnd(node_t* head, int value)
{
    node_t* new = malloc(sizeof(node_t));
    if(new == NULL)
        return 0;
    
    new->data = value;
    new->next = NULL;

    if(IsEmpty(head))
    {
        head = new;
        return 1;
    }

    node_t* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = new;
    return 1;
}