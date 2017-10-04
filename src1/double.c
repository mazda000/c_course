#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for x
    printf("x is ");
    double x = get_double();

    // prompt user for y
    printf("y is ");
    double y = get_double();

    // perform division for user
    printf("%1.20lf divided by %1.20lf is %1.20lf\n", x, y, x / y);
}