#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input(double *x,double *y,double *x2)
{
    printf("\n\nInput X:");
    scanf("%lf", x);
    printf("\n\nInput Y:");
    scanf("%lf", y);
    printf("\n\nInput X2:");
    scanf("%lf", x2);
}
void task51(double x, double x2)
{
    printf("Task: 51\n");
    printf("log3(2x-4)/(x2 - 1)\n");

    double z = 0;

    if (x <= 2)
    {
        printf("No solutions at X = %g", x);
    }
    else if (x2 == 1)
    {
        printf("No solutions at X2 = %g", x2);
    }
    else
    {
        z = (log(2 * x - 4) / log(3.0)) /  (x2 - 1);
        printf("Z(%g, %g) = %.4f", x, x2, z);
    }

    printf("\n\n");
}

void task58(double x)
{
    printf("Task: 58\n");
    printf("(x-1)/(x^2 - 4x + 3)^0.5\n");

    double z = 0;

    if (pow(x, 2) - 4*x + 3 <= 0)
    {
        printf("No solutions at X = %g", x);
    }
    else
    {
        z = (x - 1) / pow(pow(x, 2) - 4*x + 3, 0.5);
        printf("Z(%g) = %.4f", x, z);
    }

    printf("\n\n");
}

void task17(double x, double y)
{
    printf("Task: 17\n");
    printf("ln|(y - (|x|)^0.5) * (x - (y/(x + (x^2/4)|\n");

    double z = 0;


    if (x + pow(x, 2) / 4 == 0 || y == pow(fabs(x), 0.5) || x - y/(x + pow(x, 2) / 4) == 0)
    {
        printf("No solutions at X and Y= %g, %g", x, y);
    }
    else
    {
        z = log(fabs((y - pow(fabs(x), 0.5)) * (x - y/(x + pow(x, 2) / 4))));
        printf("Z(%g, %g,) = %.4f", x, y, z);
    }

    printf("\n\n");
}

void task54(double x)
{
    printf("Task: 54\n");
    printf("1 / log5 (x^2 - 9)\n");

    double z = 0;


    if (fabs(x) <= 3 || (log(pow(x, 2) - 9.0) / log(5.0) == 0))
    {
        printf("No solutions at X = %g", x);
    }
    else
    {
        z = 1 / (log(pow(x, 2) - 9.0) / log(5.0));
        printf("Z(%g) = %.4f", x, z);
    }

    printf("\n\n");
}

void task55(double x)
{
    printf("Task: 55\n");
    printf("((2x - 5)^0.5)/(x^2 + 4x - 5)\n");

    double z = 0;


    if (pow(x, 2) + 4*x - 5 == 0 || 2*x - 5 <= 0)
    {
        printf("No solutions at X = %g", x);
    }
    else
    {
        z = pow(2*x - 5, 0.5) / (pow(x, 2) + 4*x - 5);
        printf("Z(%g) = %.4f", x, z);
    }

    printf("\n\n");
}

int main(void)
{
    double x = 0, y = 0,x2 = 0;

    input(&x, &y, &x2);
    task51(x, x2);
    task58(x);
    task17(x, y);
    task54(x);
    task55(x);

    return 0;
}