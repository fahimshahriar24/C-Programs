#include <stdio.h>

int main()
{
    float a;
    int b;
    float c = a / b;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("The Value of C is : %f", c);

    return 0;
}