#include<stdio.h>
#include<stdlib.h>

/*A function that iteratively computes the factorial of a number*/
unsigned long int fact_rec(int a){
  //unsigned long int Factorial(int a);


  if (a==0||a==1) {
    //printf("The factorial of 0 or 1 is 1\n");
    return 1;
    }

  else {

    return a*fact_rec(a-1);
  }

}

/*Modifying Exercise 8 using cattling the function fact_it*/
int main(int argc, char *argv[]) {
  int x;


  printf("Welcome, Kindly input an Integer: \n");
  scanf("%d", &x);
  printf("The Factorial of %d is %ld\n", x, fact_rec(x));

  return 0;
}
