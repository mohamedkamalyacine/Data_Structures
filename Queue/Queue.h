#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

typedef struct ST_node_t Node;

struct ST_node_t
{
    int Data;
    Node* Next, *Prev;
};

void enqueue(int data);
int dequeue();

void Display();
#endif // QUEUE_H_INCLUDED
