#include <stdio.h>
int main()
{
    int a, b, sum, diff, pro, q, rem;
    printf ("Enter two numbers: \n");
    scanf ("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    pro = a * b;
    q = a / b;
    rem = a % b;

    printf ("The sum is %d \n", sum );
    printf ("The difference is %d \n", diff);
    printf ("The product is %d \n", pro);
    printf ("The quotient and remainder are %d and %d", q, rem);

    return 0;
}