#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c",&ch);

    printf("Next character is  : %c",ch + 1);

    return 0;
}