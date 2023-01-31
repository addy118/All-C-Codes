#include <stdio.h>
int main () 
{
	int i = 1, num, table;
	printf ("Enter the number you want multiplication table of: ");
	scanf ("%d", &num);
	
	for (; i <= 10; i++) {
		table = num * i;
		printf ("%d x %d = %d \n", num, i, table);
	}
		
	return 0;
}
