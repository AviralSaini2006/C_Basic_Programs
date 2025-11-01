#include <stdio.h>
int main()
{
    int p, q, r, s;
    printf("Enter P Q R and S : ");
    scanf("%d%d%d%d", &p, &q, &r, &s);

    if (q > 0 && r > 0 && s > 0 && p % 2 == 0)
    {
        if (q > r && s > p && r + s > p + q)
        {
            printf("Correct Values!\n");
        }
        else
        {
            printf("Wrong Values!\n");
        }
    }
    else
    {
        printf("The conditions are not satisfied");
    }
}