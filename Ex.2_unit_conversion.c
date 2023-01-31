#include <stdio.h>
void lengthConversions();
void massConversions();

// main function
void main() 
{
	int choice;
	do 
	{
	printf("\n ********************** ");
	printf("\n ** UNIT CONVERSIONS ** ");
	printf("\n ********************** \n\n");

	printf(" 1. Length Conversions \n");
	printf(" 2. Mass Conversions \n");
	printf(" 3. Exit \n");

	printf("\n Enter an option (1-3): ");
	scanf("%d", &choice );

		switch (choice)
		{
		case 1:
			lengthConversions(); 
			break;
			
		case 2:
			massConversions();
			break;
			
		case 3:
			break;
			
		default: 
			printf("Invalid Input");
		}
	} while (choice != 3);
}	

// first function
void lengthConversions() 
{	
	int l;
	float km, mile, inch, foot, metre;

	printf("\n  -------------------- ");
	printf("\n | Length Conversions | ");
	printf("\n  -------------------- \n\n");

	printf(" 1. Kilometers to Miles \n");
	printf(" 2. Miles to Kilometers \n");
	printf(" 3. Metres to Inches \n");
	printf(" 4. Inches to Metres \n");
	printf(" 5. Feet to Inches \n");
	printf(" 6. Inches to Feet \n");
	printf("\n");

	printf(" Enter an option (1-6): ");
	scanf("%d", &l);
	
		switch (l) 
		{
			case 1:
				printf("\n Entera the value in kilometres: ");
				scanf("%f", &km);
				
				mile = km / 1.60934;
				printf("\n %0.2f kilometres are equal to %0.2f miles ", km, mile);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n");
				break;
				
			case 2:
				printf("\n Enter the value in miles: ");
				scanf("%f", &mile);
				
				km = mile * 1.60934;
				printf("\n %0.2f miles are equal to %0.2f kilometres ", mile, km);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
				break;
			
			case 3:
				printf("\n Enter the value in metres: ");
				scanf("%f", &metre);
				
				inch = metre * 39.3701;
				printf("\n %0.2f metres are equal to %0.2f inches ", metre, inch);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
				break;
			
			case 4:
				printf("\n Enter the value in inches: ");
				scanf("%f", &inch);
				
				metre = inch / 39.3701;
				printf("\n %0.2f inches are equal to %0.2f metres ", inch, metre);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
				break;
			
			case 5:
				printf("\n Enter the value in feet: ");
				scanf("%f", &foot);
				
				inch = foot * 12;
				printf("\n %0.2f feet are equal to %0.2f inches ", foot, inch);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
				break;
			
			case 6:
				printf("\n Enter the value in inches: ");
				scanf("%f", &inch);
				
				foot = inch / 12;
				printf("\n %0.2f inches are equal to %0.2f feet ", inch, foot);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
				break;
			
			default: 
				printf("\n Invalid Input");
		}
}

// second function
void massConversions()
{
	int m;
	float pound, kg, gram, tonne;

	printf("\n  ------------------ ");
	printf("\n | Mass Conversions | \n");
	printf("  ------------------ \n\n");

	printf(" 1. Kilograms to Pounds \n");
	printf(" 2. Pounds to Kilograms \n");
	printf(" 3. Kilograms to Grams \n");
	printf(" 4. Grams to Kilograms \n");
	printf(" 5. Kilograms to Tonnes \n");
	printf(" 6. Tonnes to Kilograms \n");
	printf("\n");

	printf(" Enter an option (1-6): ");
	scanf("%d", &m);
	
	switch (m) 
	{
		case 1:
			printf("\n Enter the value in kilograms: ");
			scanf("%f", &kg);
			
			pound = kg * 2.20462;
			printf("\n %0.2f kilometres are equal to %0.2f pounds ", kg, pound);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
			break;
			
		case 2:
			printf("\n Enter the value in pounds: ");
			scanf("%f", &pound);
			
			kg = pound / 2.20462;
			printf("\n %0.2f pounds are equal to %0.2f kilograms ", pound, kg);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
			break;
		
		case 3:
			printf("\n Enter the value in kilograms: ");
			scanf("%f", &kg);
			
			gram = kg * 1000;
			printf("\n %0.2f kilograms are equal to %0.2f grams ", kg, gram);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
			break;
		
		case 4:
			printf("\n Enter the value in grams: ");
			scanf("%f", &gram);
			
			kg = gram / 1000;
			printf("\n %0.2f grams are equal to %0.2f kilograms ", gram, kg);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
			break;
		
		case 5:
			printf("\n Enter the value in kilograms");
			scanf("%f", &kg);
			
			tonne = kg / 1000;
			printf("\n %0.2f kilograms are equal to %0.2f tonnes ", kg, tonne);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
			break;
		
		case 6:
			printf("\n Enter the value in tonnes: ");
			scanf("%f", &tonne);
			
			kg = tonne * 1000;
			printf("\n %0.2f tonnes are equal to %0.2f kilograms ", tonne, kg);
				printf("\n\n -------------------------------------------------------------------------- \n\n\n\n");
			break;	
		
		default: 
			printf("\n Invalid Input ");	
	}
}

// Author: Aditya Kirti
// Date: 30.01.23
