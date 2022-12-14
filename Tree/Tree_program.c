#include <stdio.h>
#include <stdlib.h>
#include "Tree_prototype.h"


void Add(Tree *tree, int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Left = newNode->Right = NULL;

    if(tree->Root == NULL)
    {
        tree->Root = newNode;
    }
    else
    {
        Node *current = tree->Root;
        Node *parent;

        while(current != NULL)
        {
            parent = current;

            if(data > current->Data)
                current = current->Right;
            else
                current = current->Left;
        }

        if(data > parent->Data)
            parent->Right = newNode;
        else
            parent->Left = newNode;
    }
}

Node* GetNodeByData(Tree *tree, int data)
{
    Node* current = tree->Root;

    while(current != NULL)
    {
        if(data == current->Data)
            return current;

        if(data > current->Data)
            current = current->Right;
        else
            current = current->Left;
    }

    return NULL;
}

Node* GetParentNode(Tree *tree, Node *node)
{
    Node* parent = tree->Root;

    while(parent != NULL)
    {
        if(parent->Left == node || parent->Right == node)
            return parent;

        if(node->Data > parent->Data)
            parent = parent->Right;
        else
            parent = parent->Left;
    }

    return NULL;
}


Node* GetMaxRight(Node *node)
{
    Node *current = node;

    while(current->Right != NULL)
    {
        current = current->Right;
    }

    return current;
}

Node* GetMaxLeft(Node *node)
{
    Node *current = node;

    while(current->Left != NULL)
    {
        current = current->Left;
    }

    return current;
}

void Remove(Tree *tree, int data)
{
    Node *node = GetNodeByData(tree, data);

    if(node == NULL)
        return;

    if(node == tree->Root)
    {
        if(node->Left == NULL && node->Right == NULL)
        {
            tree->Root = NULL;
        }
        else if(node->Right == NULL)
        {
            tree->Root = tree->Root->Left;
        }
        else if(node->Left == NULL)
        {
            tree->Root = tree->Root->Right;
        }
        else
        {
            Node *newRoot = tree->Root->Left;
            Node *maxRight = GetMaxRight(newRoot);

            maxRight->Right = tree->Root->Right;
            tree->Root = newRoot;
        }
    }
    else
    {
        Node *parent = GetParentNode(tree, node);
        Node *newChild;

        if(node->Left == NULL && node->Right == NULL)
        {
            newChild = NULL;
        }
        else if(node->Right == NULL)
        {
            newChild = node->Left;
        }
        else if(node->Left == NULL)
        {
            newChild = node->Right;
        }
        else
        {
            Node *newParent = node->Left;
            Node *maxRight = GetMaxRight(newParent);

            maxRight->Right = node->Right;

            newChild = newParent;
        }

        if(parent->Left == node)
            parent->Left = newChild;
        else
            parent->Right = newChild;
    }

    free(node);
}

void Display(Node *node)
{
    if(node == NULL)
        return;

    Display(node->Left);

    printf("%d  ", node->Data);

    Display(node->Right);
}

int GetMaxDepth(Tree *tree)
{
    //Tree *current = tree;
    Node* current = tree->Root;

    if (current->Left == NULL || current->Right == NULL)
    {
        return 0;
    }
    else
    {
        int leftDepth = GetMaxDepth(&tree);
        int rightDepth = GetMaxDepth(&tree);

        if (leftDepth > rightDepth)
        {
            return leftDepth + 1;
        }
        else
        {
            return rightDepth + 1;
        }

    }
}
