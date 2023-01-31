#include <stdio.h>
int main ()
{
	char c;
	
	printf ("Enter a character: ");
	scanf ("%c", &c);
	
	if (c >= 'A' && c <= 'Z') {                            // 'A' inverted commas are necessary
		printf ("%c is an uppercase character",c );
	}
	else if (c >= 'a' && c <= 'z') {
		printf ("%c is a lowercase character", c);
	}
	else if (c >= 0 && c <= 9) {
		printf ("%c is a number", c);
	}
	else {
		printf ("%c is a special character", c);
	}
	
	return 0;
}
