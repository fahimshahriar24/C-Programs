#include <stdio.h>

int main()
{
    int num1, num2;

    printf("\n Enter the First number: ");
    scanf("%d", &num1);
    printf("\n Enter the Second number: ");
    scanf("%d", &num2);

    if (num2 > num1)
    {
        printf("\n The First number is minimum");
    }
    else
    {
        printf("\n The Second number is minimum");
    }

    return 0;
}