#include <stdio.h>

#define EXAMPLE_VALUE 90;
#define EXAMPLE_EXPONANT 5;

int power(int base, int n);
int main(){

  int val, exp;
  val = EXAMPLE_VALUE;
  exp = EXAMPLE_EXPONANT;
  printf("The power of %d by %d is: %d\n", val, exp, power(val, exp));
  return 0;
}

/**
 * Power: Raise base to nth power
 *
 *
 */
int power(int base, int n){
  int p;
  for (p = 1; n > 0; n--){
    p = p * base;
  }
  return p;
}
