#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct St_node_t Node;

struct St_node_t
{
    int Data;
    Node* Prev;
};

void push(int data);
void Pull();
int popWithDelete();
//void Display();
//void popWithoutDelete();
#endif // STACK_H_INCLUDED
