#include <stdio.h>

int main()
{
    int x;
    printf("Enter the Number: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("The number %d is Even", x);
    }
    else
    {
        printf("The number %d is odd", x);
    }
    return 0;
}