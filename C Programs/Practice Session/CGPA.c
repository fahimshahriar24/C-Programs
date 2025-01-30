#include <stdio.h>

int main()
{
    int courseCount;
    float gradePoint, totalGradePoints = 0.0;

    printf("\nEnter the number of courses: ");
    scanf("%d", &courseCount);

    for (int i = 1; i <= courseCount; i++)
    {
        printf("Enter grade point for course %d (e.g., 4.00, 3.75, etc.): ", i);
        scanf("%f", &gradePoint);

        if (gradePoint < 0.00 || gradePoint > 4.00)
        {
            printf("Invalid grade point! Please enter a value between 0.00 and 4.00.\n");
            i--;
            continue;
        }

        totalGradePoints += gradePoint;
    }

    // Calculate CGPA
    float cgpa = totalGradePoints / courseCount;
    printf("Your overall CGPA is: %.2f\n", cgpa);

    return 0;
}
