#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
  if (argc!=2){
    fprintf(stderr, "Bad argument\n");
    return 1;
  }

  int a =atoi(argv[1]);
  //int x;
  unsigned long int factorial=1;

  
  //printf("Enter a positive integer: ");
  //scanf("%d",&x);



  if (a > 0) {

      //printf("%d is a converted integer\n", a);

      for (int i = 1; i <= a; i++) {
        factorial*=i;

      }
      printf("Factorial of %d = %lu\n", a, factorial);

  }
 else if (a<0) {
   printf("Impossible to obtain the factorial of a negetive number\n");


 }
 else {
   printf( "The factorial for 0 is 1 \n");
 }

  return 0;
}
