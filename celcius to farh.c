#include <stdio.h>
int main ()
{
	float c, f;
	
	printf ("Enter the temperature in celcius: ");
	scanf ("%f", &c);
	
	f = 1.8*c + 32;
	printf ("The entered temperature in farenheit is: %f", f);
	
	return 0;
}
