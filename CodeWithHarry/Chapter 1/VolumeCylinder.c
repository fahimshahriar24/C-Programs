#include <stdio.h>

int main() {
    int height;
    int radius;
    float pi=3.1416;
    float volume;
    printf("Enter the height of the cylinder: ");
    scanf("%d",&height);
    printf("Enter the radius of the cylinder: ");
    scanf("%d",&radius);

    volume=pi*radius*radius*height;
    printf("The volume of the cylinder is: %f",volume);
    return 0;
}