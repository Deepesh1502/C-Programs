#include<stdio.h>
int main()
{
  int amount;
  printf("Enter a amount: \n");
  scanf("%d"' &amount);
  while(amount<25)
  {
    printf("Amount is too small. \n");
    printf("Try again...What is new amount?\n");
    scanf("%d", &amount);
  }
}
