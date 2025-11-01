#include <stdio.h>
int prime(int f)
{
    int c, i;
    for (c = 2; c <= f; c++)
    {
        if (f % c == 0)
        {
            i += 1;
        }
    }
    if (i > 1)
    {
        c = 0;
        return c;
    }
    else
    {
        c = 1;
        return c;
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    switch (prime(n))
    {
    case 1:
        printf("Prime");
        break;
    case 0:
        printf("Not prime");
        break;
    }
}