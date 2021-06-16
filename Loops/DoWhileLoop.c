/*In Do while loop Do whill be executed first
and the condition of While must be met to end the loop
*/
#include <stdio.h>
int main()
{
  int a, n;
  printf("Enter the intial value: \n");
  scanf("%d", &a);//the user can in[ut a value to start
  printf("Enter the final value: \n");
  scanf("%d", &n);// the user can input a value to end
  printf("Do While Loop\n");
  do{
    printf("%d\n", a);
    a=a+1;//This will initialize the value
  }while (a<=n);
}
