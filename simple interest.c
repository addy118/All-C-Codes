#include <stdio.h>
int main ()
{
	float p, n, r, si;
	
	printf ("Enter the principal amount, number of year and rate of interest respectively: \n");
	scanf ("%f %f %f", &p, &n, &r);
	
	si = (p*n*r)/100;	
	printf ("Simple interest is: %f", si); 
	
	return 0;
}
