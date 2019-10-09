#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float calculate(float num_1, float num_2, char operator) {
  float result;
  if (operator == '+') {
    result = num_1 + num_2;
  }
  else if (operator == '-') {
    result = num_1 - num_2;
  }
  else if (operator == 'x') {
    result = num_1 * num_2;
  }
  else if (operator == '/') {
    result = num_1 / num_2;
  }
  else {
    fprintf(stderr, "invalid operator\n");
  }
  return result;
}
int main(int argc, char *argv[]) {
  float sum;
  sum = calculate(atof(argv[2]),atof(argv[3]),argv[1][0]);
  printf("%f\n", sum);
  return 0;
}
