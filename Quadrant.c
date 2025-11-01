#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the X cordinate : ");
    scanf("%d", &x);

    printf("Enter the Y cordinate : ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("I Quadrant\n");
    }
    else if (0 > x && y > 0)
    {
        printf("II Quadrant\n");
    }
    else if (0 > x && 0 > y)
    {
        printf("III Quadrant\n");
    }
    else if (x > 0 && 0 > y)
    {
        printf("IV Quadrant\n");
    }
}