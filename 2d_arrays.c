// 2d array
#include <stdio.h>    
void main ()    
{    
    int arr[3][3],i,j;    
	
	// for storing matrix
    for (i = 0; i < 3; i++)    
    {    
        for (j = 0; j < 3; j++)    
        {    
            printf("Enter a[%d][%d]: ", i, j);                
            scanf("%d", &arr[i][j]);    
        }    
    }    
    printf("\nThe Matrix is: \n");  
	
	// for displaying matrix   
    for(i = 0; i < 3; i++)    
    {  
        for (j = 0; j < 3; j++)    
        {    
            printf("%d\t", arr[i][j]);    
        }    
        printf("\n");     
    }    
}  
