#include<stdio.h>
int main()
{
  int num, sum, temp, r;
  printf("Enter a number: ");
  scanf("%d", &num);
  sum=0;

/*temp is a temporary variable to
store the value of variable n*/
  temp=num;

/*While code block is used to
increment the value of sum with temp*/
  while (t>0) {
    r=temp%10;
    sum=sum+r*r*r;
    temp=temp/10;
  }

  if(sum==num)
    printf("%d is Armstrong", num);
  else
    printf("%d is not Armstrong", num);
}
