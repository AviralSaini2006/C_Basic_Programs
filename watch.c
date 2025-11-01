#include <stdio.h>
int main()
{
    int h, m, s, input;
    printf("Enter the time in seconds : ");
    scanf("%d", &input);

    h = input / 3600;
    m = (input % 3600) / 60;
    s = input % 60;

    printf("The time is H = %d M = %d and S = %d", h, m, s);
}