#include <stdio.h>

int main() {
    int C;
    int F;
    printf("Enter the value of celcius: ");
    scanf("%d",&C);
    
    F = C * (9.0 / 5.0) + 32;
    printf("\nThe temp in Fahrenheit is: %d",F);

    return 0;
}