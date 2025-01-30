#include <stdio.h>

int main()
{
    int num1, num2;
    char ch;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("What operation to perform? (+ - * /): ");
    while (getchar() != '\n')
        ;
    scanf("%c", &ch);

    switch (ch)
    {
    case '+':
    {
        int sum = num1 + num2;
        printf("Addition result is: %d", sum);
        break;
    }
    case '-':
    {
        int sub = num1 - num2;
        printf("Subtraction result is: %d", sub);
        break;
    }
    case '*':
    {
        int mul = num1 * num2;
        printf("Multiplication result is: %d", mul);
        break;
    }
    case '/':
    {
        float div = num1 / num2;
        printf("Division result is: %.2f", div);

        break;
    }
    default:
        printf("Invalid operation");
        break;
    }

    return 0;
}
