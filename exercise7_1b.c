#include <stdio.h>
/* While loop*/

int main(){
  char name[10];
  int x;
  int sum = 0;
  printf("Dear user, please input your name: \n");
  scanf("%s", name);

  printf("Welcome %s, Lets do some arithmetic\n", name);

  printf("Please enter A positive Number: ");
  scanf("%d", &x);

  int i= 1;
  do {
    sum+=i;
    i++;
  }
  while (i<=x);
  printf("Finally %s, The sum of integer numbers from 1 to %d is: %d\n", name,  x, sum);
  return 0;
}
