#include <stdio.h>
int main ()
{
	int price, paise ;
	printf ("Enter the price in ruppees: \n");
	scanf ("%d", &price);
	
	paise = price * 100;
	
	printf ("The entered price in paise is %d", paise);
	return 0;
}
