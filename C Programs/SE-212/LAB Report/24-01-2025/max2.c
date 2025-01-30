#include <stdio.h>

int main()
{
    int num1, num2;

    printf("\n Enter the First number: ");
    scanf("%d", &num1);
    printf("\n Enter the Second number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("\nThe First number is maximum");
    }
    else
    {
        printf("\n The Second number is maximum");
    }

    return 0;
}