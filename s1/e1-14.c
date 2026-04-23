#include <stdio.h>
#include <limits.h>


int main (int argc, char **argv)
{
  int i, c, countArr[CHAR_MAX+1];
  for (i = 0; i <= CHAR_MAX; i++) {
    countArr[i] = 0;
  }
  while ((c = getchar()) != EOF) {
    countArr[c]++;
  }
  for (i = 0; i <= CHAR_MAX; i++) {
    if (countArr[i] > 0)
    {
      printf("%5c:", (char)i);
      for (; countArr[i] > 0; countArr[i]--)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}
