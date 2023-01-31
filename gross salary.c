#include <stdio.h>
int main()
{
    int gs, b = 50000, hra, da;

    hra = b * 0.8;
    da = b * 0.2;
    gs = b + hra + da;

    printf ("The gross salary of the employee is %d", gs);
    return 0;
}