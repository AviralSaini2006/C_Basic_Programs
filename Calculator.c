#include <stdio.h>
int main()
{
    int a, b, d, f;
    char op, exit, option;
    f = 0;
    while (f == 0)
    {
        printf("Enter the first number : ");
        scanf("%d", &a);
        printf("Enter the second number : ");
        scanf("%d", &b);
        printf("Select which operator you want to use :\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5.Exit (e)\n");
        getchar();
        scanf("%c", &op);

        switch (op)
        {
        case '+':
            d = a + b;
            printf("The result is %d\n", d);
            printf("Would you like to continue (y/n) : \n");
            getchar();
            scanf("%c", &option);
            if (option == 'y')
            {
                f = 0;
            }
            else if (option == 'n')
            {
                f = f + 1;
            }
            break;
        case '-':
            d = a - b;
            printf("The result is %d\n", d);
            printf("Would you like to continue (y/n) : \n");
            getchar();
            scanf("%c", &option);
            if (option == 'y')
            {
                f = 0;
            }
            else if (option == 'n')
            {
                f = f + 1;
            }
            break;
        case '*':
            d = a * b;
            printf("The result is %d\n", d);
            printf("Would you like to continue (y/n) : \n");
            getchar();
            scanf("%c", &option);
            if (option == 'y')
            {
                f = 0;
            }
            else if (option == 'n')
            {
                f = f + 1;
            }
            break;
        case '/':
            if (b != 0)
            {
                d = a / b;
                printf("The result is %d\n", d);
                printf("Would you like to continue (y/n) : \n");
                getchar();
                scanf("%c", &option);
                if (option == 'y')
                {
                    f = 0;
                }
                else if (option == 'n')
                {
                    f = f + 1;
                }
            }
            else
            {
                printf("B cannot be zero!");
            }
            break;
        case 'e':
            if (op == 'e')
                ;
            {
                f = f + 1;
            }
            break;
        default:
            printf("Invalid Operator\n");
            printf("Would you like to continue (y/n) : ");
            getchar();
            scanf("%c", &option);
            if (option == 'y')
            {
                f = 0;
            }
            else if (option == 'n')
            {
                f = f + 1;
            }
        }
    }
}