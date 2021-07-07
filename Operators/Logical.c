/*Program to find the type of triangle by its sides
'And' and 'Or' Logic Operator has been used
*/
#include <studio.h>
int main()
{
  int a,b,c;
  printf("Enter sides of a triangle: ");
  scanf("%d%d%d", &a, &b, &c);

//The '&&' is used as And Logic Operator
    if (a==b && b==c)
      printf("Triangle is Equilateral");

//The '||' is used as Or Logic Gate   
    else if (a==b || b==c || a==c)
      printf("Triangle is Isosceles");
    else
      printf("Triangle is Scalane");
}
