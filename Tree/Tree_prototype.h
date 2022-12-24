#ifndef TREE_PROTOTYPE_H_INCLUDED
#define TREE_PROTOTYPE_H_INCLUDED

typedef struct Node Node;

struct Node
{
    int data;
    Node* leftChild;
    Node* rightChild;
};

#endif // TREE_PROTOTYPE_H_INCLUDED
