#include<stdio.h>
int main()
{
int n, sum, temp, r;
printf("Enter a number: ");
scanf("%d", &n);
sum=0;

/*temp is a temporary variable to
*/store the value of variable n
temp=n;

/*While code block is used to
*/increment the value of sum with temp
while (temp>0) {
  r=temp%10;
  sum=(sum*10)+r;
  temp=temp/10;
}

if(n==sum)
  printf("%d is pallindrome", n);
else
  printf("%d is not pallindrome", n);
}
