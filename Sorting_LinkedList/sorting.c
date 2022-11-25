#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "Sorting.h"



void bubbleSort()
{
    int counter, index;
    int sorted = 0;
    Node* ptrNode, *current;
    int temp;

    ptrNode = head;

    while(ptrNode->Next != NULL)
    {
        current = head;

        while(current->Next != NULL)
        {
            if(current->Data > current->Next->Data)
            {
                temp = current->Data;
                current->Data = current->Next->Data;
                current->Next->Data = temp;
            }
            current = current->Next;
        }
        ptrNode = ptrNode->Next;
    }
    /*    for(counter = 0; counter < size - 1 && !sorted; counter++)
        {
            sorted = 1;

            for(index = 0; index < size - 1 - counter; index++)
            {
                if(data[index] > data[index + 1])
                {
                    Swap(&data[index], &data[index + 1]);
                    sorted = 0;
                }
            }
        }*/
}
