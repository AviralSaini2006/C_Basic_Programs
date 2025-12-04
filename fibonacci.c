#include <stdio.h>
void fib(int a)
{
    int r, x = 0, y = 1;
    printf("%d\n%d\n", x, y);
    while (a > 0)
    {
        r = x + y;
        x = y;
        y = r;
        printf("%d\n", r);
        a -= 1;
    }
}
int main()
{
    int n;
    printf("Enter value : ");
    scanf("%d", &n);

    n = n - 2;

    fib(n);

    return 0;
}