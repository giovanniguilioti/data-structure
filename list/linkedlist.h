#ifndef LINKED_LIST
#define LINKED_LIST

#include<stdlib.h>

struct node
{
    int data;
    node_t* next;
}
typedef struct node node_t;

int IsEmpty(node_t* head);

int Size(node_t* head);

int SearchElement(node_t* head, int value);

int ElementAt(node_t* head, int index);

int InsertBegin(node_t* head, int value);

int InsertAt(node_t* head, int index, int value);

int InsertEnd(node_t* head, int value);

int DeleteBegin(node_t* head);

int DeleteAt(node_t* head, int index);

int DeleteEnd(node_t* head);

#endif