#include <stdio.h>
int main()
{
    int n, res, c = n;
    printf("Enter the number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        res = n % 10;
        printf("%d", res);
        n = n / 10;
    }

    return 0;
}