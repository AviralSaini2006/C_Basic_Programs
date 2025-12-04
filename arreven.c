#include <stdio.h>
int main()
{
    int n, a[20], i, sum = 0;
    printf("Enter limit : ");
    scanf("%d", &n);
    printf("Enter values : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum = sum + a[i];
    }
    printf("%d\n", sum);
}