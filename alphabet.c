#include <stdio.h>
int main()
{
    int n, i;
    char a[20];
    printf("Enter limit : ");
    scanf("%d", &n);
    printf("Enter values : ");
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 1;
        else if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 1;
        printf("%c ", a[i]);
    }
    return 0;
}