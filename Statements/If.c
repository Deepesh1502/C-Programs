/*The program will determine
Whether the value is positive or negative
*/
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the value: ");
  scanf("%d", &n);
  if (n>0)
  {
    printf("The number is positive");
  }
  else
    printf("The number is negative");
}
