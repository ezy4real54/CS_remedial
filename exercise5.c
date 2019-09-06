#include <stdio.h>
int main(){
  int x, y;
  printf("x receives value3...\n");
  x = 3;
  printf("  (x >= 8) = %d\n", x>=8);
  printf("  !x = %d\n", !x);
  printf("x receives value15...\n");
  x = 15;
  printf("  (x >= 8) = %d\n", x>=8);
  printf("  !x = %d\n", !x);
  printf("y receives value0...\n");
  y = 0;
  printf("  !y = %d\n", !y);
  printf("  (x >= 8 && y < 0) = %d\n", x>=8 && y<0);
  printf("  (x && y) = %d\n", x && y);
  printf("y receives value-5...\n");
  y = -5;
  printf("  !y = %d\n", !y);
  printf("  (x >= 8 && y < 0) = %d\n", x>=8 && y<0);
  printf("  (x && y) = %d\n", x && y);
  return 0;
}
