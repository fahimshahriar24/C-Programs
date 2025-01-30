#include <stdio.h>

int main() {
    int radius;
    float area;

    printf("Enter the radius: ");
    scanf("%d",&radius);
    
    area=3.1416*radius*radius;

    printf("The area of the circle is: %f",area);
    
    return 0;
}