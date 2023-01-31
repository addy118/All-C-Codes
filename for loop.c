#include <stdio.h>
int main ()
{
	int i; 
	for (i=1; i <= 10; i++)    //// the value of i starts from 1 and is incremented till it reaches 10
	{
            printf ("%d \n", i);    // printf is used inside the loop because we need to print each incremented value and not only the final value 
	}
	return 0;
}
