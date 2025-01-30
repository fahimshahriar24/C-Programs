#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter the marks of first subject: \n");
    scanf("%d", &marks1);
    printf("Enter the marks of second subject: \n");
    scanf("%d", &marks2);
    printf("Enter the marks of third subject: \n");
    scanf("%d", &marks3);

    printf("Your marks are %d %d & %d", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("\nYou failed motherfucker");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)

    {
        printf("\nYou are such a failure");
    }
    else
    {
        printf("\nYou passed buddy");
    }

    return 0;
}