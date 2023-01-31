#include <stdio.h>
int main()
{
    int a, b, c, d; 
    double root1, root2;
    d = (b*b) - (4*a*c);
    double rootd = sqrt(d);

    printf ("Enter values of coefficients: \n");
    scanf ("%d %d %d", a, b, c);

    if (d > 0) {
        root1 = (-b + rootd) / (2*a);
        root2 = (-b - rootd) / (2*a);
        printf ("Roots are real and unequal");
        printf ("%lf and %lf are the roots of the equation", root1, root2);
    }

    else if (d == 0) {
        root1 = root2 = -b / (2*a);
        printf ("Roots are real and equal");
        printf ("%lf and %lf are the roots of the equation", root1, root2);
    }

    else {
        printf ("Roots are imaginary");
    }

    return 0;
}















