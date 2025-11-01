#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x, y, number, power, result, formula;
    printf("Enter the values a b and c : ");
    scanf("%f%f%f", &a, &b, &c);

    power = pow(b, 2);
    number = power - 4 * a * c;

    if (number > 0)
    {
        formula = sqrt(number);
        x = (-b + formula) / 2 * a;
        y = (-b - formula) / 2 * a;

        printf("The roots x and y are %.2f and %.2f\n", x, y);
    }
    else
    {
        printf("The roots are not formable!\n");
    }
}