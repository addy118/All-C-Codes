#include <stdio.h>
int main()
{
    int a,b,temp;
    printf ("Enter two numbers: \n");
    scanf ("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf ("The numbers after swapping are %d and %d", a, b);
    return 0;
}