#include <stdio.h>

int main()
{
    if (1)
    {
        printf("This can be executed - 1\n");
    }
    if (56156)
    {
        printf("This can be executed - 56156 \n");
    }
    if ('D')
    {
        printf("This can be executed - D \n");
    }
    if (2.75)
    {
        printf("This can be executed - 2.75 \n");
    }
    if (0)
    {
        printf("This can't be executed - 0 \n");
        // zeros can't be exetued in if statement
    }

    return 0;
}