#include <stdio.h>
int main() 
{
    int num, originalNum, rem, sum = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &num);
    originalNum = num;

   for (sum = 0; num > 0; num = num / 10)
   {
       rem = num % 10;
       sum = sum + (rem * rem * rem);
   }

    if (originalNum == sum)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}


