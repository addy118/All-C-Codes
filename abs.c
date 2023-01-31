#include <stdio.h>
int main ()
{
    float num, abs;
    printf ("Enter a real number: \n");
    scanf ("%f", &num);

    if (num < 0) {
        printf ("The entered number %0.2f is a negative number \n", num);
        abs = num*(-1);
        printf ("The absolute value of %0.2f is %0.2f \n", num, abs);
    }
    else if (num > 0) {
        printf ("The entered number %0.2f is a positive number \n", num);
        abs = num;
        printf ("The absolute number of %0.2f is %0.2f \n", num, abs);
    }
    else {
        printf ("The entered number is zero \n");
    }

    return 0;
}