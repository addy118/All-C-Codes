#include <stdio.h>
int main ()
{
	int a, b, n;
	
	printf ("Enter the values of a & b: \n");
	scanf ("%d %d", &a, &b);
	
	if (a && b) {
		printf ("AND statement is true \n");
	}
	else {
		printf ("AND statement is false \n");
	}
	
	if (a || b) {
		printf ("OR statement is true \n");
	}
	else {
		printf ("OR statement is false \n");
	}
	
	n = !a;
	printf ("%d is the result after NOT operation on %d \n", n, a);
	
	return 0;
}
