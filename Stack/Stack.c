#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Node* head = NULL;
Node* tail = NULL;

void Push(int data)
{
    Node* newNode = malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Next = NULL;

    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->Next = newNode;
        tail = newNode;
    }
}

void Display()
{
    Node *current = head;

    while(current != NULL)
    {
        printf("%d   ", current->Data);
        current = current->Next;
    }
}









