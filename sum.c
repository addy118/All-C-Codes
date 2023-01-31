#include <stdio.h>
int main()
{
    int a, b, c;
    printf ("Enter two numbers: \n");
    scanf ("%d %d", &a, &b);  // don't ever forget the '&' with the variable in scanf
    c = a + b;
    printf ("The sum of the numbers is: %d", c);
    return 0;
}