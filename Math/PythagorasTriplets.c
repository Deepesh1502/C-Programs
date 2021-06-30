/*This program uses If-ElseIf statement to calculate in different ways for same values
You can identify the pythagoras triplets and which side is Hypotenuse side
*/
#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the value of three sides of a triangle: ");
  scanf("%d%d%d", &a, &b, &c);
  if (a*a+b*b==c*c)
  {
    printf("The sides %d, %d, %d are pythagoras triplets\n",a,b,c);
    printf("Where %d and 5d are the sides of th triangle ",a,b);
    printf("and %d is the hypotenuse",c);
  }
  else if (b*b+c*c==a*a)
  {
    printf("The sides %d, %d, %d are pythagoras triplets\n",a,b,c);
    printf("Where %d and 5d are the sides of th triangle ",b,c);
    printf("and %d is the hypotenuse",a);
  }
  else if (c*c+a*a==b*b)
  {
    printf("The sides %d, %d, %d are pythagoras triplets\n",a,b,c);
    printf("Where %d and 5d are the sides of th triangle ",c,a);
    printf("and %d is the hypotenuse",b);
  }
  else
  {
    printf("The sides %d, %d, %d are not the pythagoras triplets",a,b,c);
  }
}
