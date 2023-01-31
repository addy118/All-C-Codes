#include <stdio.h>
int main ()
{
	int roll, marks, percentage, p, c, m1, m2, e;
	
	printf ("Enter the roll number: \n");
	scanf ("%d", &roll);
	
	printf ("Enter the marks obtained in Physics out of 100: \n");
	scanf ("%d", &p);
    
	printf ("Enter the marks obtained in Chemistry out of 100: \n");
	scanf ("%d", &c);
	
	printf ("Enter the marks obtained in Mathematics-1 out of 100: \n");
	scanf ("%d", &m1);
	
	printf ("Enter the marks obtained in Mathematics-2 out of 100: \n");
	scanf ("%d", &m2);
	
	printf ("Enter the marks obtained in English out of 100: \n");
	scanf ("%d", &e);
	
	marks = p + c + m1 + m2 + e;
	
	printf ("The total marks of the student is %d \n", marks);
	
	percentage = (marks * 100 / 500);
	
	printf ("The percentage of the student is %d: \n", percentage);
	return 0;	
}
