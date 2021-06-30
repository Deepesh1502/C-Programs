/*To print Prime numbers
from initial value to final value
*/
#include <stdio.h>
int main()
{
  int a,b,i,Number,count;
  printf("Enter the initial value: ");
  scanf("%d", &a);//Input value to intialize the first prime number
  printf("Enter the final value: ");
  scanf("%d", &b);//Input the value to intialize the last prime number
  printf("Prime Number from %d to %d are: \n",a,b);
  for(Number=a;Number<=b;Number++)
  {
    count=0;
    for (i=2;i<=Number/2;i++)
    {
      if(Number%i==0)
      {
        count++;
        break;
      }
    }
    if(count==0 && Number!=1)
    {
      printf(" %d", Number);
    }
  }
  return 0;
}
