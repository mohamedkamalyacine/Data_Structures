#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

Node *head = NULL, *tail = NULL;

void Add(int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Prev = newNode->Next = NULL;

    if(head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->Next = newNode;
        newNode->Prev = tail;
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

Node* GetNodeByData(int data)
{
    Node *current = head;

    while(current != NULL)
    {
        if(data == current->Data)
            return current;

        current = current->Next;
    }

    return NULL;
}

void Remove(int data)
{
    Node *node = GetNodeByData(data);

    if(node == NULL)
        return;

    if(node == head)
    {
        if(head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            head = head->Next;
            head->Prev = NULL;
        }
    }
    else if(node == tail)
    {
        tail = tail->Prev;
        tail->Next = NULL;
    }
    else
    {
        /*Node *A = node->Prev;
        Node *B = node->Next;

        A->Next = B;
        B->Prev = A;*/

        node->Prev->Next = node->Next;
        node->Next->Prev = node->Prev;
    }

    free(node);
}

void InsertAfter(int data, int afterData)
{
    Node *insertedNode = malloc(sizeof(Node));
    insertedNode->Data = data;

    Node *afterNode = GetNodeByData(afterData);

    if(afterNode->Next != NULL)
    {
        insertedNode->Next = afterNode->Next;
        insertedNode->Prev = afterNode;
        afterNode->Next->Prev = insertedNode;
        afterNode->Next = insertedNode;
    }
    else
    {
        printf("\nError\n");
    }
}

int GetCount()
{
    int counter = 0;
    Node* check = head;

    while(check->Next != NULL)
    {
        counter++;
        check = check->Next;
    }
    counter++;
    return counter;
}

int GetDataByIndex(int index)
{
    int i=0;
    int data = 0;

    Node* check = head;

    while(check->Next != NULL)
    {
        if(i == index)
        {
            data = check->Data;
            return data;
        }
        check = check->Next;
        i++;
    }

    return -1;
}










