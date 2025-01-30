#include <stdio.h>

int main() {
    int A,B,C,Y;
    printf("Enter the value of A: ");
    scanf("%d",&A);
    printf("Enter the value of B: ");
    scanf("%d",&B);
    printf("Enter the value of C: ");
    scanf("%d",&C);

    Y = B * (A + B) / 2;
    printf("The Solve is Y : %d\n", Y);

    return 0;
}