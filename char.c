#include <stdio.h>
int main ()
{
    char response[10];
    printf ("Types yes or no \n");
    fgets (response, 10, stdin);

    if (response[10] == "yes") {
        printf ("You typed yes");
    }
    else {
        printf ("You didn't type yes");
    }
    return 0;
}