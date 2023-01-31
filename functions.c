#include <stdio.h>

//function prototype, also called function declaration
float square (float x);

//main function, program starts from here
int main()
{
	float m, n;
	printf ("Enter some number for finding square \n");
	scanf ("%f", &m);
	//function call
	n=square (m);
	printf ("Square of the given number %f is %f", m, n);
}

float square (float x)   //function definition
{
	float p;
	p=x*x;
	return (p);
}

