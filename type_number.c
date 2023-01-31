#include <stdio.h>
int main ()
{
    int num;
    printf ("Enter a number: \n");
    scanf ("%d", &num);

    switch (num > 0) 
    {
        case 1:
            printf ("The entered number %d is a positive number", num);
            break;
        case 0:
            switch (num < 0)
            {
                case 1:
                    printf ("The entered number %d is a positive number", num);
                    break;
                case 0:
                    printf ("The entered nuumber is 0");
            }
    }

    return 0; 
}