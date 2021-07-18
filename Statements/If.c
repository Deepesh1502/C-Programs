/*The program will determine
Whether the value is non-zero or not
*/
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the value: ");
  scanf("%d", &n);
  if ((n>0) || (n<0))
  {
    printf("The number is non-zero");
  }
/*If the value is 0 then there will be
no output and the program will stop
*/
  return 0;
}
