#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void input(double *x,double *y,double *x1,double *x2,double *x3)
{
    printf("\n\nInput X:");
    scanf("%lf", x);
    printf("\n\nInput Y:");
    scanf("%lf", y);
    printf("\n\nInput X1:");
    scanf("%lf", x1);
    printf("\n\nInput X2:");
    scanf("%lf", x2);
    printf("\n\nInput X3:");
    scanf("%lf", x3);
}
void task3(double x, double y)
{
    printf("Task: 3\n");
    printf("(x+y)/(y+1) - (xy-12)/(34+x)\n");

    double z = 0;

    if (x == -34)
    {
        printf("No solutions at X = %g", x);
    }
    else if (y == -1)
    {
        printf("No solutions at Y = %g", y);
    }
    else
    {
        z = (x + y) / (y + 1) - (x * y - 12) / (34 + x);
        printf("Z(%g, %g) = %.4f", x, y, z);
    }

    printf("\n\n");
}

void task10(double x, double y)
{
    printf("Task: 10\n");
    printf("(x+(1/x^2)^x) - 12*x^2*y\n");

    double z = 0;

    if (x == 0)
    {
        printf("No solutions at X = %g", x);
    }
    else
    {
        z = (x + pow(1.0 / pow(x, 2), x)) - 12 * pow(x, 2) * y;
        printf("Z(%g, %g) = %.4f", x, y, z);
    }

    printf("\n\n");
}

void task29(double x, double x1, double x2, double x3)
{
    printf("Task: 29\n");
    printf("(x1x2 + x1x3 + x2x3)/x\n");

    double z = 0;


    if (x == 0)
    {
        printf("No solutions at X = %g", x);
    }
    else
    {
        z = (x1 * x2 + x1 * x3 + x2 * x3) / x;
        printf("Z(%g, %g, %g, %g) = %.4f", x, x1, x2, x3, z);
    }

    printf("\n\n");
}

void task6(double x)
{
    printf("Task: 6\n");
    printf("sin (x+1)^0.5 - sin (x-1)^0.5\n");

    double z = 0;


    if (x < 1)
    {
        printf("No solutions at X = %g", x);
    }
    else
    {
        z = sin(pow(x + 1, 0.5) - sin(pow(x - 1, 0.5)));
        printf("Z(%g) = %.4f", x, z);
    }

    printf("\n\n");
}

void task7(double x, double y)
{
    printf("Task: 7\n");
    printf("(1 -tgx)^ctgx + cos(x-y)\n");

    double z = 0;


    if ((cos(x) == 0) || (sin(x) == 0))
    {
        printf("No solutions at X = %g", x);
    }
    else
    {
        z = pow(1 - tan(x), (cos(x) / sin(x))) + cos(x - y);
        printf("Z(%g, %g) = %.4f", x, y, z);
    }

    printf("\n\n");
}

int main(void)
{
    double x = 0, y = 0, x1 = 0, x2 = 0, x3 = 0;

    input(&x, &y, &x1, &x2, &x3);
    task3(x, y);
    task10(x, y);
    task29(x, x1, x2, x3);
    task6(x);
    task7(x, y);

    return 0;
}

