#include <stdio.h>
int main() 
{
    int num, originalNum, rem, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

   for (sum = 0; num > 0; num = num / 10)
   {
       rem = num % 10;
       sum = (sum * 10) + rem;
   }

    if (originalNum == sum)
        printf("%d is a Palindrome number.", sum);
    else
        printf("%d is not a Palindrome number.", sum);

    return 0;
}


