#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    if (x > y)
    {
        printf("X is maximum");
    }
    else if (y > z)
    {
        printf("Y is maximum");
    }
    else
    {
        printf("Z is maximum");
    }

    return 0;
}