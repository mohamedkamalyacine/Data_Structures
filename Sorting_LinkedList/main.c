#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "Sorting.h"

int main()
{
    Add(5);
    Add(3);
    Add(1);
    Add(4);
    Add(6);
    Add(2);
    Add(0);
    Display();
    //printf("\n");

    printf("\nIndex 4: %d \n", GetDataByIndex(4));

    bubbleSort();
    Display();

    printf("\nIndex 4: %d \n", GetDataByIndex(4));

    return 0;
}
