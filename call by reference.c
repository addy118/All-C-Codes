#include <stdio.h>
// function prototype, also called function declaration
void swap (int *a, int *b);
int main()
{
	int m = 22, n = 44;
	// calling swap function by reference
	printf ("Values before swap m = %d and n = %d \n", m, n);
	swap (&m, &n);
}

void swap (int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf ("Values after swap a = %d and b = %d", *a, *b);
}
