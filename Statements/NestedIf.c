#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number");
  scanf("%d", &a);
    if(a%2==0) {
      if(a%11==0) {
        printf("Number is mutiple of 11");
      }
      else{
        printf("Number is even");
      }
    }
  else{
    printf("Number is odd");
  }
}
