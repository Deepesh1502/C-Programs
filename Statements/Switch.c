#include<stdio.h>
int main()
{
  int n;
    printf("Enter a value:\n");
    scanf(" %d", &n);
      switch (n)
      {
        case 1:
          printf("Statement 1\n");
          break;
        case 2:
          printf("Statement 2\n");
          break;
        default:
          printf("statement 3\n");
      }
}
