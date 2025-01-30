#include <stdio.h>

int main() {
    char uppercase,lowercase;
    printf("Enter an Uppercase Letter: ");
    scanf("%c",&uppercase);
    if (uppercase>='A' && uppercase<='Z')
    {lowercase=uppercase+32;  //Converts Uppercase to Lowercase
        
        printf("The lowercase letter is: %c",lowercase);
    }
    else {
        printf("Invalid input, enter an Uppercase letter");
    }
    
    return 0;
}