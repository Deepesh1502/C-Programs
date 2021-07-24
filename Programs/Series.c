/*The Program will create a series which will have
The value of third number will be addition of first two numbers
*/
#include<stdio.h>
int main()
{
int a, b, i, num, n;
printf("Enter a number: ");
scanf("%d", &num);
i=0;
a=0;
b=1;
  while(i<=num) {

//The If is used to print first two numbers
    if(i<=1) {
      n=i;
    }

//Else code block will add the numbers and print the value
    else {
      n=a+b;
      a=b;
      b=n;
    }
    printf("%d\n", n);
    i=i+1;
  }
}
