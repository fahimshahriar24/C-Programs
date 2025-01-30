#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("X is maxmimum");
    }
    else
    {
        printf("Y is maxmium");
    }

    return 0;
}