#include <stdio.h>

int main (int argc, char *argv[])
{
  int c, t = '\0';
  while ((c = getchar()) != EOF)
  {
    if (t == '\0'|| !(t == ' ' && c == ' '))
      putchar(c);
    t = c;
  }
  return 0;
}
