#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);

    Display();
    printf("\n");
    int x = 0;

    do
    {
        x = dequeue();
        if(x != 0)
        {
            Display();
            printf("\n");
        }
    }
    while(x != 0);

    /*Display();
    enqueue(555);
    Display();*/

    if(x==0)
    {
        printf("Queue is empty\n");
    }
    enqueue(33);
    Display();
    printf("\n");

    /*Display();

    dequeue();
    printf("\n");

    Display();*/


    return 0;
}
