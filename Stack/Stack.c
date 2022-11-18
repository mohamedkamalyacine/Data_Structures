#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Node* head = NULL;
Node* tail = NULL;

void Push(int data)
{
    Node* newNode = malloc(sizeof(Node));
    newNode->Data = data;
    //newNode->Next = NULL;

    if(head == NULL)
    {
        head = newNode;
        newNode->Prev = NULL;
    }
    else
    {
        newNode->Prev = head;
        head = newNode;
        /*head->Next = newNode;
        head = newNode;
        newNode->Next = NULL;*/
        /*tail->Next = newNode;
        tail = newNode;*/
    }
}

/*void Pull()
{
    if(tail != NULL)
    {
        Node* current = tail->Next;
        free(current);
    }

    //Node* current = tail;
    int x = 0;

    if(current != head)
    {
        x = current->Data;
        printf("\n X in function PULL %d\n", x);
        current->Prev = NULL;
        free(current);
        //tail = tail->Next;
        //tail->Next = NULL;
    }
}*/

int popWithDelete()
{

    if(head == NULL)
    {
        printf("No Element\n");
        return -1;
    }
    else
    {
        Node *current = head;
        head = head->Prev;

        int x = current->Data;
        current->Prev = NULL;
        free(current);
        return x;
    }
    /*while(current != NULL)
    {
        printf("%d   ", current->Data);
        current = current->Next;
    }*/
}









