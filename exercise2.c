#include <stdio.h>
int main(int argc, char*argv[]) {

  printf("%d was recieved as the total number of arguments\n", argc );

  int firstnumber, secondnumber, result;
  //userinput
  printf("Give the first number\n");
  scanf("%d", &firstnumber);
  printf("Give the second number\n");
  scanf("%d", &secondnumber);
  //computation of result
  result = firstnumber *secondnumber;
  //The result is displayed
  printf("The produt of these values is: %d\n", result);
  return 0;
}
