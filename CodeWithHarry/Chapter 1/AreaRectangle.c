#include <stdio.h>
int main (){
    int area,length,width;
    printf("Enter the value of Length: ");
    scanf("%d",&length);
    printf("Enter the value of width: ");
    scanf("%d",&width);

    area=length*width;

    printf("The area of the rectangle is %d",area);
    return 0;
}