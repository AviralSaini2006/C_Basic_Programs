#include <stdio.h>
int main()
{
    int a[20], n, i, d, b[20], r;
    printf("Enter limit : ");
    scanf("%d", &n);

    printf("Enter values : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = 0;
        r = a[i];
        while (a[i] != 0)
        {
            d = a[i] % 10;
            b[i] = b[i] * 10 + d;
            a[i] = a[i] / 10;
        }
        if (b[i] == r)
            printf("Palindrome\n");
        else
            printf("Not Palindrome\n");
    }
}