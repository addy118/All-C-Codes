#include <stdio.h>
int main ()
{
    float a;
    printf ("Enter a floating point number: ");
    scanf ("%f", &a); 

    // The number is: %a.bf, here a is spaces to be left from lhs and for spaces from rhs put -a, b indicates the  number of digits after decimal point.
    
    printf ("The number is: %0.2f \n", a);
    printf ("The number is: %.4f \n", a);
    printf ("The number is: %-3.5f \n", a);
    printf ("The number is: %5.2f \n", a);
    return 0;
}