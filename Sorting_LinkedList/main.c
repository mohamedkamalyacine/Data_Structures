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
    bubbleSort();

    Display();
    return 0;
}
