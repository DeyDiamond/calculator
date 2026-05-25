#include <stdio.h>

int main(void)
{
    int a;
    int b;
    char op;
    char again;

    again = 'y';

     while (again == 'y' || again == 'Y')
    { 
        printf("Enter number: ");
        scanf("%d", &a);
        printf("Enter operation: ");
        scanf(" %c", &op);
        printf("Enter number: ");
        scanf("%d", &b);
        
        if (op == '+')
        {
          printf("Result: %d\n", a + b);
        }
        else if (op == '-')
        {
          printf("Result: %d\n", a - b);
        }
        else if (op == '*')
        {
          printf("Result: %d\n", a * b);
        }
        else if (op == '/')
        {
        if (b == 0)
        {
          printf("Error: division by zero\n");
        }
        else 
        {
         printf("Result: %d\n", a / b);
        }
        }
        else
        {
         printf("Error: Unknown operator\n");    
        }
         printf("Again? y/n:\n");
         scanf(" %c", &again);
    }
return 0;
}