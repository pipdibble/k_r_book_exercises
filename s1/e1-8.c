#include <stdio.h>

int main()
{
  double nc;
  double nl;
  double nt;
  double ns;
  int c;

  nc = nl = nt = ns = 0;
  
  while ((c = getchar()) != EOF) {
    ++nc;
    switch (c) {
      case '\n':
        ++nl;
        break;
      case ' ':
        ++ns;
        break;
      case '\t':
        ++nt;
        break;
      default:
        break;
    }
  }
  printf("%5s %5s %5s %5s\n", "Chars", "Lines", "Tabs", "Spaces");
  printf("%5.0f %5.0f %5.0f %5.0f\n", nc, nl, nt, ns);
  
  return 0;
}
