#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "BinarySearch.h"

int binarySearch(int num)
{
    int start = 0, mid = 0, end =0;
    int length = 0, currentVal = 0;

    length = GetCount();
    end = length;

    while(start <= end)
    {
        mid = (start + end) / 2;
        currentVal = GetDataByIndex(mid);

        if(num == currentVal)
        {
            return currentVal;
        }

        if(num > currentVal)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }

    return -1;
}
