#ifndef TREE_PROTOTYPE_H_INCLUDED
#define TREE_PROTOTYPE_H_INCLUDED

typedef struct Node Node;

struct Node
{
    int Data;
    Node *Left, *Right;
};

typedef struct Tree
{
    Node *Root;

}Tree;

void Add(Tree *tree, int data);
Node* GetNodeByData(Tree *tree, int data);
Node* GetParentNode(Tree *tree, Node *node);
Node* GetMaxRight(Node *node);
Node* GetMaxLeft(Node *node);
void Remove(Tree *tree, int data);
void Display(Node *node);
int GetMaxDepth(Tree *tree);

#endif // TREE_PROTOTYPE_H_INCLUDED
