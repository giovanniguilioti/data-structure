#include "doubly_linkedlist.h"

int IsEmpty(struct node* head)
{
    if(head == NULL)
        return 1;

    return 0;
}

int ListSize(struct node* head)
{
    if(head == NULL)
        return 0;

    struct node* temp = head->next;

    int i = 1;
    while(temp != NULL)
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

    struct node* temp = head;
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

    struct node* temp = head;
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

    new->data = value;
    new->next = *head;
    new->prev = NULL;

    if(IsEmpty(*head))
    {
        *head = new;
        return 1;
    }

    (*head)->prev = new;
    *head = new;

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
        new->next = *head;
        new->prev = NULL;
        *head = new;
        return 1;
    }

    struct node* temp = *head;
    int i = 1;
    while(i < index)
    {
        temp = temp->next;
        ++i;
    }

    new->prev = temp;
    new->next = temp->next;
    if(new->next != NULL)
        new->next->prev = new;

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

    if(IsEmpty(*head))
    {
        new->prev = NULL;
        *head = new;
        return 1;
    }

    struct node* temp = *head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = new;
    new->prev = temp;
    return 1;
}

int DeleteBegin(struct node** head)
{
    if(IsEmpty(*head))
        return 0;

    struct node* temp = *head;
    *head = (*head)->next;

    if(*head != NULL)
        (*head)->prev = NULL;

    free(temp);
    return 1;
}

int DeleteAt(struct node** head, int index)
{
    if(IsEmpty(*head))
        return 0;

    if(index < 0 || index >= ListSize(*head))
        return 0;

    struct node* temp = *head;

    if(index == 0)
    {
        *head = (*head)->next;
        (*head)->prev = NULL;
        
        free(temp);
        return 1;
    }

    int i = 0;
    while(i < index)
    {
        temp = temp->next;
        ++i;
    }

    temp->prev->next = temp->next;
    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    return 1;
}

int DeleteEnd(struct node** head)
{
    if(IsEmpty(*head))
        return 0;

    struct node* temp = *head;

    if(ListSize(*head) == 1)
    {
        free(temp);
        *head = NULL;
        return 1;
    }

    while(temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    free(temp);

    return 1;
}