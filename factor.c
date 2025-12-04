#include <stdio.h>
int factor(int x)
{
    int i, c = 0;
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
            c++;
    }
    return c;
}
int main()
{
    int n;
    printf("Enter value : ");
    scanf("%d", &n);
    printf("%d\n", factor(n));
}