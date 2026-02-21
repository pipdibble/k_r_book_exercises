#include <stdio.h>

/* Print Celsius-Fahrenheit table
 * for celsius -20, -10, ..., 200
 * floating-point version
 */

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -20.0;
  upper = 200.0;
  step = 20;

  printf("%3s %6s\n", "^C", "^F");

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
  }
  return 0;
}
