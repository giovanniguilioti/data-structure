#include "header_linkedlist.h"

int IsEmpty(struct node* head)
{
    if(head == NULL || head->next == NULL)
        return 1;

    return 0;
}

int ListSize(struct node* head)
{
    if(head == NULL || head->next == NULL)
        return 0;

    struct node* temp = head->next;

    int i = 0;
    while(temp->next != NULL)
    {   
        temp = temp->next;
        ++i;
    }

    return i;
}

int SearchElement(struct node* head, int value)
{
    if(IsEmpty(head))
        return -1;

    struct node* temp = head->next;
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

int ElementAt(struct node* head, int index)
{
    if(IsEmpty(head))
        return 0;

    if(index < 0)
        return 0;

    if(index >= ListSize(head))
        return 0;

    struct node* temp = head->next;
    int i = 0;
    while(i < index)
    {
        temp = temp->next;
        ++i;
    }
    
    return temp->data;
}

int InsertBegin(struct node** head, int value)
{
    struct node* new = malloc(sizeof(struct node));
    if(new == NULL)
        return 0;

    if(*head == NULL)
    {
        *head = malloc(sizeof(struct node));
        (*head)->next = NULL;
    }
    new->data = value;
    new->next = (*head)->next;
    (*head)->next = new;

    return 1;
}

int InsertAt(struct node** head, int index, int value)
{
    if(index < 0 || index > ListSize(*head))
        return 0;

    struct node* new = malloc(sizeof(struct node));
    if(new == NULL)
        return 0;

    new->data = value;
    new->next = NULL;

    if(index == 0)
    {
        if(*head == NULL)
        {
            *head = malloc(sizeof(struct node));
            (*head)->next = NULL;
        }

        new->next = (*head)->next;
        (*head)->next = new;
        return 1;
    }

    struct node* temp = (*head)->next;
    int i = 1;
    while(i < index)
    {
        temp = temp->next;
        ++i;
    }

    new->next = temp->next;
    temp->next = new;
    return 1;
}

int InsertEnd(struct node** head, int value)
{
    struct node* new = malloc(sizeof(struct node));
    if(new == NULL)
        return 0;
    
    new->data = value;
    new->next = NULL;

    if(*head == NULL)
    {
        *head = malloc(sizeof(struct node));
        (*head)->next = new;
        return 1;
    }
    else if((*head)->next == NULL)
    {
        (*head)->next = new;
        return 1;
    }

    struct node* temp = (*head)->next;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = new;
    return 1;
}