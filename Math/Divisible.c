/*This code is an example of you can use many if statement
By this method you can get multiple valid result for a single value
*/
#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The number is divisible by:");
  if (n%1==0)
  {
    printf(" 1");
  }
  if (n%2==0)
  {
    printf(" 2");
  }
  if (n%3==0)
  {
    printf(" 3");
  }
  if (n%4==0)
  {
    printf(" 4");
  }
  if (n%5==0)
  {
    printf(" 5");
  }
  if (n%7==0)
  {
    printf(" 7");
  }
  if (n%9==0)
  {
    printf(" 9");
  }
  if (n%10==0)
  {
    printf(" 10");
  }
  if (n%11==0)
  {
    printf(" 11");
  }
  if (n%13==0)
  {
    printf(" 13");
  }
  if (n%17==0)
  {
    printf(" 17");
  }
  if (n%19==0)
  {
    printf(" 19");
  }
  if (n%23==0)
  {
    printf(" 23");
  }
  if (n%31==0)
  {
    printf(" 31");
  }
  if (n%37==0)
  {
    printf(" 37");
  }
}
//You can use add  more if statement for 41, 43, 47, 53, 59....
//Basically using all Prime numbers
