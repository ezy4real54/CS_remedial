#include<stdio.h>
#include<stdlib.h>

/*A function that iteratively computes the factorial of a number*/
void fact_it(int a){
  unsigned long int Factorial = 1;
  int i=1;
  do {
    if(a>0){

      do {
        Factorial*=i;
        i++;
      }
      while(i<=a);
      printf("The factorial of %d is %lu\n", a, Factorial);
        }
    else if(a==0){
      printf("The factorial of 0 is 1\n");
    }
    else {
      fprintf(stderr, "Error, The factorial of a negetive number does not exist\n");
    }
    i++;

  } while(i<a);
}


  /*label:
  printf("Welcome, Kindly input a ppsitive Integer: \n");
  scanf("%d", &a);



  if(a>0){
    for (int i = 0; i < a; i++) {
      Factorial*=i;
  }
  printf("The factorial of %d is %lu\n", a, Factorial);
}
  else if(a<0){
  fprintf(stderr, "Error, The factorial of a negetive number does not exist\n");
  goto label;i++;
  }

  else {
    printf("The factorial of 0 is 1\n");
    }
*/



/*Modifying Exercise 8 using cattling the function fact_it*/
int main(int argc, char* argv[]){

  int x;
  printf("Welcome, Kindly input an Integer: \n");
  scanf("%d", &x);
  fact_it(x);

  return 0;
}
