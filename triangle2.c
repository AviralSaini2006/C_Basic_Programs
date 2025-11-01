#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values of a b and c : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && b == c)
        {
            printf("Equilateral\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isosceles\n");
        }
        else if (a != b && b != c && c != a)
        {
            printf("Scalene\n");
        }
    }
    else
    {
        printf("Not a valid triangle\n");
    }
}