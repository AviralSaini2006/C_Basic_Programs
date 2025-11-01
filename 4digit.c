#include <stdio.h>
int main()
{
    int n, first_d, second_d, third_d, fourth_d, product, c = 0;
    char ans;
    while (c == 0)
    {
        printf("Enter the four digit number : ");
        scanf("%d", &n);

        if (n >= 1000 && n <= 9999)
        {
            first_d = n / 1000;
            second_d = (n / 100) % 10;
            third_d = (n / 10) % 10;
            fourth_d = n % 10;

            product = first_d * second_d * third_d * fourth_d;

            printf("The Result is : %d\n", product);

            printf("Would you like to continue (y/n) : ");
            getchar();
            scanf("%c", &ans);
            if (ans == 'y')
            {
                c = 0;
            }
            else if (ans == 'n')
            {
                c = c + 1;
            }
            else
            {
                printf("Invalid Input, Session Terminated\n");
                c = c + 1;
            }
        }
        else
        {
            printf("Invalid Input\n");
            printf("Would you like to continue (y/n) : ");
            getchar();
            scanf("%c", &ans);
            if (ans == 'y')
            {
                c = 0;
            }
            else if (ans == 'n')
            {
                c = c + 1;
            }
            else
            {
                printf("Invalid Input,Session Terminated\n");
                c = c + 1;
            }
        }
    }
}