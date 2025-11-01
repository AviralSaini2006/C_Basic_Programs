#include <Stdio.h>
int main()
{
    int m;
    printf("Enter the Marks : ");
    scanf("%d", &m);

    if (m >= 30)
    {
        printf("Student is passed!\n");
    }
    else
    {
        printf("Student is failed!\n");
    }
}