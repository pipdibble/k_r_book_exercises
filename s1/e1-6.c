#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
    printf(" %d ", (c != EOF));
  }
  printf(" %d ", (c != EOF));
  return 0;
}
