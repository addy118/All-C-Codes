#include <stdio.h>
int main ()
{
    int week;
    printf ("Enter the day number in a week \n");
    scanf ("%d", &week);

    switch (week)
    {
        case 1:
            printf ("The day name is Monday");
            break;
        case 2:
            printf ("The day name is Tuesday");
            break;
        case 3:
            printf ("The day name is Wednesday");
            break;
        case 4:
            printf ("The day name is Thursday");
            break;
        case 5:
            printf ("The day name is Friday");
            break;
        case 6:
            printf ("The day name is Saturday");
            break;
        case 7:
            printf ("The day name is Sunday");
            break;
        default:
            printf ("That many days don't exist");
    }

    return 0;
}