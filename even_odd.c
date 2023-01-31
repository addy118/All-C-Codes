#include <stdio.h>
int main ()
{
	int a;
	
	printf ("Enter a number: ");
	scanf ("%d", &a);
	
	if (a%2 == 0) {    // % = modulo operator; it gives the remainder as output while / = division operator gives quotient as the output
		printf ("%d is even", a);
	}
	else {
		printf ("%d is odd", a);
	}
	
	return 0;
}
