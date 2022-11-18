#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main()
{
    //int x = 0;
    Push(5);
    Push(4);
    Push(8);
    Push(3);

    /*printf("Pop : %d\n",popWithDelete());
    printf("Pop : %d\n",popWithDelete());
    printf("Pop : %d\n",popWithDelete());
    printf("Pop : %d\n",popWithDelete());

    printf("Pop : %d\n",popWithDelete());
    Push(9);
    printf("Pop : %d\n",popWithDelete());
    printf("Pop : %d\n",popWithDelete());*/

    //Display();
    int x = 0;
    do
    {
        x = popWithDelete();
        if(x != -1)
        {
            printf("POP : %d\n", x);
        }

    }while(x != -1);

    /*Pull();
    printf("\n");
    Display();*/

    return 0;
}
