#include <stdio.h>
int main()
{
    int n, sum;
    printf ("Enter the value of n: \n");
    scanf ("%d", &n);

    sum = (n * (n + 1) * (2 * n + 1)) / 6;
    printf ("The sum of squares of first %d numbers is %d", n, sum);
    return 0;
}