#include <stdio.h>
int main ()
{
	int i, n, sum = 0;
	
	printf ("Enter the last number: ");
	scanf ("%d", &n);
	
	for (i = 1; i <= n; i++)    // the value of i starts from 1 and is incremented till it reaches 10
	{
		sum = sum + i;
	}
	printf ("%d", sum);    // only prints sum once as sum is only one value
	
	return 0;
}
