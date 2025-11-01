#include <stdio.h>
int main()
{
    int n, i, j, s, m, l = 1;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    m = n;

    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= m - 1; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        m -= 1;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (s = 1; s <= l; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        l += 1;
    }
}