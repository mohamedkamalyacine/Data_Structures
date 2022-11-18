#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct St_node_t Node;

struct St_node_t
{
    int Data;
    Node* Next;
};

void push(int data);
void Display();
int pull();

#endif // STACK_H_INCLUDED
