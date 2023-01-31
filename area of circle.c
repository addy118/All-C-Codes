#include <stdio.h>
#include <conio.h>
#define PI 3.14    // for declaring a const in preprocessing step; #define const_name const_value
int main ()
{
	int r; 
	float area; 
//	const float PI = 3.14;    // alternate method to declare a constant
	printf ("Enter the radius of circle: \n");
	scanf ("%d", &r);
	
	area = PI * (r * r);    // uses the value of const defined in preprocessor
	printf ("The area of circle is %f", area);
	
	return 0;
}
