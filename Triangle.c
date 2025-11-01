#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the 1st 2nd and 3rd side of the triangle : ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
    {
        printf("Triangle can be formed!\n");
    }
    else
    {
        printf("Triangle cannot be formed!\n");
    }
}