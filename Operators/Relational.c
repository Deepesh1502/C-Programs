/*The Relational Operators are used in
If condition to make decision*/
#include<stdio.h>
int main()
{
  int a, b;
  printf("Enter value of A: ");
  scanf("%d", &a);
  printf("Enter value of B: ");
  scanf("%d", &b);
  if (a != b) //Not Equal to
  {
    if (a >= 0) //Greater than or equal to
    {
      printf("%d is positive\n", a);
    }
    if (a < 0) //Lesser than
    {
      printf("%d is negative\n", a);
    }
    if (0 <= b) //Lesser than or equal to
    {
      printf("%d is greater than 0\n", b);
    }
    if (10 > b) //Greater than
    {
    printf("10 is greater than %d\n", b);
    }
  }
  if (a == b) //Equal to
  {
    printf("Both values of A and B are equal\n");
  }
}
