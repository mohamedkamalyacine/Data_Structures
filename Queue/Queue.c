#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

Node* Front = NULL;
Node* Rear = NULL;

void enqueue(int data)
{
    Node* newNode = malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Next = newNode->Prev = NULL;

    if(Front == NULL)
    {
        Front = Rear = newNode;
    }
    else
    {
        Rear->Next = newNode;
        newNode->Prev = Rear;
        Rear = newNode;
    }
}

int dequeue()
{
    if(Front == NULL)
    {
        printf("Front is NUll\n");
        return 0;
    }

    Node* current = Front;

    if(Front == Rear)
    {
        //printf("\nYes\n");
        Front->Next = Front->Prev = NULL;
        Front = Rear = NULL;
        free(current);
    }
    else
    {
        Front = Front->Next;
        Front->Prev = NULL;
        free(current);
        return 1;
    }
}

void Display()
{
    Node *current = Front;

    while(current != NULL)
    {
        printf("%d  ", current->Data);
        current = current->Next;
    }
}









