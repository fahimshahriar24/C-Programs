#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);

    printf("The Division of A and B is: %d",a/b);
    printf("\nThe remainder of A and B is: %d",a%b);
    return 0;
}