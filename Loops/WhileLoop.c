//A while loop is a type of loop which keeps on looping until condition met
#include <stdio.h>
int main()
{
  int i, n;
  printf("Enter the value to start loop:");
   scanf(" %d", &i); //This part will take value to start the loop
  printf("enter the value to end loop:");
   scanf(" %d", &n); //this part will take value to end the loop
   while (i<=n) {
  printf("%d\n", i);
      i++;
    }
}
