#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;

    int c = 0;
    int d = 1;

    printf("The value of a and b is %d\n", a && b);
    // && is used for logical operation of AND gate
    printf("The value of a or b is %d\n", a || b);
    // || is used for logical operation of OR gate

    printf("The value of c and d is %d\n", c && d);
    printf("The value of c or d is %d\n", c || d);

    printf("The value of NOT(a) is %d\n", !a);
    printf("The value of NOT(c) is %d\n", !c);
    // "!" is used for logical operation of NOT gate
    // it makes true to false and false to true

    if (a && b)
    {
        printf("Both are true\n ");
    }
    // is the same as writing
    if (a)
    {
        if (b)
        {
            printf("Both are true\n");
        }
    }

    return 0;
}