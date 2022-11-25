#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "BinarySearch.h"

int main()
{
    int x = 0;

    Add(10);
    Add(20);
    Add(30);
    Add(40);
    Add(50);
    Add(60);
    Add(70);
    Add(80);
    Add(90);
    Add(100);

    Display();
    printf("\n");
    x = binarySearch(50);

    //x = binarySearch(3);

    if(x != -1)
    {
        printf("X = %d \n", x);
    }
    else
    {
        printf("Number is not exist\n", x);
    }
    return 0;
}
