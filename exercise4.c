#include <stdio.h>
#include <math.h>

#define EXPONENT 3
#define ME "Ezinne"

 int main(int argc, char*argv[]) {
  float nb, result;

  printf("%d was recieved as the total number of arguments\n", argc );

  //User input
  printf("Hi %s, Give a real number\n", ME);
  scanf("%f", &nb);



  //computation
  result = pow(nb, EXPONENT);

  //The result is displayed
  printf("%f to the power of %d is equal to %f\n", nb, EXPONENT, result);
  return 0;
}
