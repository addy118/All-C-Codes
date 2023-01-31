#include<stdio.h>
#include<string.h>
int main()
{
	long int num;
	int sum=0,rem;
	printf("Enter a number eual to or less than 4 digit: \n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}

	num=sum;

	while(num!=0)
	{
		rem=num%10;
		switch(rem)
		{
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			case 0:
				printf("zero ");
				break;
		}
		num=num/10;
	}
	return 0;
}
