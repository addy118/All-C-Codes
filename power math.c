#include <stdio.h>
#include <math.h>
int main ()
{
	double base, exp, ans;
	
	printf ("Enter the base and exponent: \n");
	scanf ("%lf %lf", &base, &exp);
	
	ans = pow (base, exp);
	printf ("%lf ^ %lf = %lf", base, exp, ans);
	
	return 0;
}
