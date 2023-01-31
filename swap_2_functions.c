#include <stdio.h>
void swap(int a, int b) 
{
	int temp = 0;
	temp = b;
	b = a;
	a = temp;
	printf("Swapped values are %d & %d", a, b);
}

void main() 
{
	int num1, num2;
	printf("Enter any two numbers: \n");
	scanf("%d %d", &num1, &num2);
	swap(num1, num2);
}
	
	
