#include <stdio.h>
int main ()
{   
    char sci, mat;

    printf ("Have you passed in Science? \n");
    scanf ("%c", &sci);

    printf ("Have you passed in Mathematics? \n");
    scanf ("%c", &mat);

    if (sci == 'Y' && mat == 'Y') {
        printf ("Congratulations! You won a prize of Rs. 45 \n");
    }
        // else if (sci[10] == 'N','n','O','o' && mat[10] == 'N','n','O','o') {
        //     printf ("Better luck next time \n");
        // }
            else {
                printf ("You won a prize of Rs. 15 \n");
            }
    
    return 0;
    }
