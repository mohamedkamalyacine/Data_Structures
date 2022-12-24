#include <stdio.h>
#include <stdlib.h>
#include "Tree_prototype.h"

int main()
{
    Tree T1 = {.Root = NULL};
    Add(&T1, 50);
    Add(&T1, 60);
    Add(&T1, 70);
    Add(&T1, 30);
    Add(&T1, 20);
    Add(&T1, 10);
    printf("Root = %d\n", T1.Root->Data);
    printf("Max Right = %d\n", (GetMaxRight(T1.Root))->Data);
    printf("Max Left  = %d\n", (GetMaxLeft(T1.Root))->Data);
    printf("Max Depth  = %d\n", GetMaxDepth(&T1));
    return 0;
}
