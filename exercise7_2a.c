#include <stdio.h>

void swap(int* a, int* b){

  int t;

  t= *b;
  *b=*a;
  *a=t;

}

int main(){
  char name[10];
  int x;
  int y;
  int sum = 0;


  printf("Dear user, please input your name: \n");
  scanf("%s", name);

  printf("Welcome %s, Lets do some arithmetic\n", name);



  printf("Please enter two positive Numbers: \n");
  label:
  scanf("%d %d", &x, &y);


  if (x<0 && y<0)
  {
    printf(" Sorry Negetive inputs for both x aand y inputed \n");
    goto label;
  }

  else {

  if (x>y)
    swap(&x, &y);

  for(int i = x; i<=y; i++)
        sum += i;
    printf("Finally %s, The sum of integer numbers from %d to %d is: %d\n", name,  x, y, sum);

}

  return 0;
}
