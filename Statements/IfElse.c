#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter any three nos.: \n");
  scanf("%d%d%d", &a, &b, &c);
  if(a>b)
    if(a>c)
      printf("%d is greatest no. \n", a);
    else
      printf("5d is greatest no. \n", c);
  else
    if(b>c)
      printf("%d is greatest no. \n", b);
    else
      printf("%d is greatest no. \n", c);
}
