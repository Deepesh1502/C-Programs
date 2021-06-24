/*You can use If-ElseIf same as switch statement
The difference is the condition must be decreaseed by value
In switch case the condition increased by value going from top to bottom
*/
#include<stdio.h>
int main()
{
  int n;
  printf("Select a number from 1 to 10");
  scanf("%d", &n);
  if (n==10)
  {
    printf("Your day was awesome ;)");
  }
  if else (n<=9)
  {
    printf("Your day was good :)");
  }
  if else (n<=7)
  {
    printf("Your day was neutral");
  }
  if else (n<=5)
  {
    printf("Your day was Bad");
  }
  if else (n<=3)
  {
    printf("Your day was very bad :("):
  }
  if else (n<=2)
  {
    printf("Go to Hell!!");
  }
  else (n==1)
  {
    printf("You are dead!!!");
  }
}
