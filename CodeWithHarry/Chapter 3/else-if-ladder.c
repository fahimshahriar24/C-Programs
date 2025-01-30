#include <stdio.h>

int main()
{
    int marks;
    printf("\nEnter your marks: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("A+ CG=4");
    }
    else if (marks <= 79 && marks >= 75)
    {
        printf("A CG=3.75");
    }
    else if (marks <= 74 && marks >= 70)
    {
        printf("A- CG=3.5");
    }
    else if (marks <= 69 && marks >= 65)
    {
        printf("B+ CG=3.25");
    }
    else if (marks <= 64 && marks >= 60)
    {
        printf("B CG=3.00");
    }
    else if (marks <= 59 && marks >= 55)
    {
        printf("B- CG=2.75");
    }
    else if (marks <= 54 && marks >= 50)
    {
        printf("C+ CG=2.5");
    }
    else if (marks <= 49 && marks >= 45)
    {
        printf("C CG=2.25");
    }
    else if (marks <= 44 && marks >= 40)
    {
        printf("D-Passed CG=2.00");
    }
    else
    {
        printf("\nYou Failed motherfucker \nYou are such a failure");
    }

    return 0;
}