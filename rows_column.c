#include <stdio.h>
int main ()
{
	int i, j, n;    // i = rows, j = columns
	
	printf ("Enter number of rows: ");
	scanf ("%d", &n);
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {    // j <= i for incrementint the no. of stars in column in each row if j <= n then it will print with equal no. of stars in each row and column
			printf ("*");    // prints each rows and columns
		}
	printf ("\n");    // prints each row in a new line, without this all the asterisks will be printed on the same line
    }
    
	return 0;
}





