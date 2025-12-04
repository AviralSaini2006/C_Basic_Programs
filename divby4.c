#include <stdio.h>
float div(int x)
{
    if (x % 4 == 0)
        return 3.14 * x * x;
    else
        return x * x;
}
void recur(int x)
{
    if (x == 0)
        return;
    else if (x % 4 == 0)
        printf("%d Divisible by 4 then area of circle is %.2f\n", x, div(x));
    else
        printf("%d Not divisible by 4 then area of square is %.2f\n", x, div(x));
    recur(x - 1);
}
int main()
{
    int n;
    printf("Enter value : ");
    scanf("%d", &n);

    recur(n);
}