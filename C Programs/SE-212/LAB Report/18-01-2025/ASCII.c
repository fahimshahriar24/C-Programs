#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    printf("\nYou entered : %c",ch);
    printf("\nASCII value is : %d",ch);

    return 0;
}