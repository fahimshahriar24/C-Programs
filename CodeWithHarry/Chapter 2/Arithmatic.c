//code of simple interest
#include <stdio.h>

int main() {
    float P,I;
    int R,T;
    printf("Enter the value of P: ");
    scanf("%f",&P);
    printf("Enter the value of R: ");
    scanf("%d",&R);
    printf("Enter the value of T: ");
    scanf("%d",&T);

    I=(P*R*T)/100; //simple interest formula

    printf("The value of Simple interest is: %f",I);
    return 0;
}