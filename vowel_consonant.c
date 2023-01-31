#include <stdio.h>
int main ()
{
    char c;
    printf ("Enter any character: \n");
    scanf ("%c", &c);

    switch (c) {
        case 'a':
            printf ("The entered character '%c' is a vowel", c);
            break;
        case 'e':
            printf ("The entered character '%c' is a vowel", c);
            break;
        case 'i':
            printf ("The entered character '%c' is a vowel", c);
            break;
        case 'o':
            printf ("The entered character '%c' is a vowel", c);
            break;
        case 'u':
            printf ("The entered character '%c' is a vowel", c);
            break;
        case 'A':
            printf ("The entered character '%c' is a vowel", c);
            break;
        case 'E':
            printf ("The entered character '%c' is a vowel", c);
            break;
        case 'I':
            printf ("The entered character '%c' is a vowel", c);
            break;
        case 'O':
            printf ("The entered character '%c' is a vowel", c);
            break;
        case 'U':
            printf ("The entered character '%c' is a vowel", c);
            break;
        default:
            printf ("The entered character '%c' is a consonant", c);
    }

    return 0;
}