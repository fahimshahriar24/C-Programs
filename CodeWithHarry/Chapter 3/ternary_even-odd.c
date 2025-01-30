#include <stdio.h>

int main()
{
    int x;
    printf("Enter the Number: ");
    scanf("%d", &x);

    x % 2 == 0 ? printf("The number %d is Even", x) : printf("The number %d is odd", x);
    return 0;
}