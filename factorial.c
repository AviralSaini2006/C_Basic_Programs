#include <stdio.h>
int main()
{
    int n, S = 0, F = 1, c;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (c = 1; c <= n; c++)
    {
        F = F * c;
        S = S + F;
    }
    printf("The result is %d\n", S);
}