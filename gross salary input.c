#include <stdio.h>
int main()
{
    int gs, b, hra, da;
    printf ("Enter the basic salary of the employee: ");
    scanf ("%d", &b);   // DON'T FORGET THE "&"
    
    hra = b * 0.8;
    da = b * 0.2;
    gs = b + hra + da;

    printf ("The gross salary of the employee is %d", gs);
    return 0;
}
