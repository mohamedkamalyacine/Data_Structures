#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node Node;

extern Node* head;
//Node *head;
//extern Node *head;

struct Node
{
    int Data;
    Node *Prev, *Next;
};

void Add(int data);
void Display();
Node* GetNodeByData(int data);
void Remove(int data);

void InsertAfter(int data, int afterData);
int GetCount();
int GetDataByIndex(int index);

#endif // LINKEDLIST_H
