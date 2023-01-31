#include <stdio.h>
int main ()
{
	int a, b, sum;
	
	printf ("Enter the first number: \n");
	scanf ("%d", &a);
	
	printf ("Enter the second number: \n");
	scanf ("%d", &b);
	
	sum = a + b;
	if (sum >= 20)
	{
    	printf ("The sum is greater than or equal to 20");
	}
	
        else
        {
        	printf ("The sum is less than 20");
		}
	
	return 0;
}
