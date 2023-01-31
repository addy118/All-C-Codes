// 2d array types
#include <stdio.h>
int i, n;

// 2d array without initializing
void arrayNonInitialised() 
{
    int numbers[10];
    printf("Enter number of elements in arrays: \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        printf("\nElement %d = ", i);
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < n; i++) 
    {
        printf("\n\nElement %d = %d \n", i, numbers[i]);
    }
}

// 2d array with initializing type 1
void arrayInitialized_1()
{
    int numbers[] = {1,3,2,5,7};

    for(i = 0; i < 5; i++)
    {
        printf("%d \n", numbers[i]);
    }
}

// 2d array with initializing type 2
void arrayInitialized_2()
{
   int numbers[5] = {1,3,2,5,7};

    for(i = 0; i < 5; i++)
    {
        printf("%d \n", numbers[i]);
    } 
}

// 2d array initializing type 3
void arrayInitialized_3()
{
    int numbers[5];

    numbers[0] = 1;
    numbers[1] = 3;
    numbers[2] = 2;
    numbers[3] = 5;
    numbers[4] = 7;

    for(i = 0; i < 5; i++)
    {
        printf("%d \n", numbers[i]);
    }
}

// main function
void main()
{
    int choice;
    do
    {
        printf("\n1. Non Initialized");
        printf("\n2. Initialized Type 1");
        printf("\n3. Initialized Type 2");
        printf("\n4. Initialized Type 3");
        printf("\n5. Exit");

        printf("\n\nSelect which array type you want to execute: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
            case 1:
                arrayNonInitialised();
                printf("\n");
                break;
            
            case 2:
                arrayInitialized_1();
                printf("\n");
                break;

            case 3:
                arrayInitialized_2();
                printf("\n");
                break;
            
            case 4:
                arrayInitialized_3();
                printf("\n");
                break;

            case 5: 
                printf("Exiting the program...");
                break;

            default:
                printf("\nInvalid Input");
        }
    } while (choice != 5);  
}

// Author: Aditya Kirti
// Date: 31.01.2023