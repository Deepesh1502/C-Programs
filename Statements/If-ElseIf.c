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
  else if (n<=9)
  {
    printf("Your day was good :)");
  }
  else if (n<=7)
  {
    printf("Your day was neutral");
  }
  else if (n<=5)
  {
    printf("Your day was Bad");
  }
  else if (n<=3)
  {
    printf("Your day was very bad :("):
  }
  else if (n<=2)
  {
    printf("Go to Hell!!");
  }
  else (n==1)
  {
    printf("You are dead!!!");
  }
}
