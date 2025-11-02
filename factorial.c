#include <stdio.h>
int fac(int S)
{
    int c, F = 1;
    for (c = 1; c <= S; c++)
    {
        F = F * c;
    }
    return F;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("The result is %d\n", fac(n));
}