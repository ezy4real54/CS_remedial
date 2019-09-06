#include <stdio.h>

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
    printf(" Sorry Negetive inputs for both %d aand %d inputed \n", x, y );
    goto label;
  }

  else if((x>0 && y>0)&&(x<y)) {
    for (int i = x; i<= y; i++) {
      sum+=i;
    }
    printf("Congratulations %s, The sum of the integers from %d to %d  is: %d\n", name, x, y, sum );

  }

    else{
    printf("Hey %s, Kindly re-enter your values; lower bound before upper bound\n", name);
    goto label;
    }

  return 0;
  }
