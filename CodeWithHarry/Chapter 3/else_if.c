#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("You can drive and you are a senior citizen \n");
    }
    else if (age > 40)
    {
        printf("You can drive, but you are older");
    }
    else if (age > 18)
    {
        printf("Congrats! You can drive");
    }

    else
    {
        printf("You can't drive");
    }

    return 0;
}