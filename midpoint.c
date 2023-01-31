#include <stdio.h>
int main()
{
    float a, b, mid;
    printf ("Enter the initial value: ");
    scanf ("%f", &a);
    printf ("Enter the final value: ");
    scanf ("%f", &b);
    mid = (a + b)/2;
    printf ("The midpoint of the entered values is %f", mid);
    return 0;
}