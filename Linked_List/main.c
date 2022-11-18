#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"


int main()
{
    Add(3);
    Add(5);
    Add(7);
    Add(9);

    InsertAfter(6, 5);
    InsertAfter(8, 7);

    Display();

    int counter = GetCount();
    printf("\nNumber of Nodes: %d\n", counter);

    int data = GetDataByIndex(5);

    printf("Data of Index : %d\n", data);
    //InsertAfter(5,0);
    return 0;
}
