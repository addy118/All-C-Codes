#include <stdio.h>

int sqr(int num)
    {
        int sqr;
        sqr = num * num;
        return sqr;
    }

void main()
{
  int number, square;
  printf("Enter a number: \n");
  scanf("%d", &number);

  square = sqr(number);
  printf("Square of the entered number is %d", square);
}
