#include <stdio.h>

#define MAXWORDLENGTH 50

int main(int argc, char *argv[])
{
  int c, wordLength = 0, wordLengthArr[MAXWORDLENGTH];
  int i = 0, y = 0;
  /* initialise array with zeroes to start with */
  for (i = 0; i < MAXWORDLENGTH; i++)
  {
    wordLengthArr[i] = 0;
  }
  while (1)
  {
    c = getchar();
    if (c == ' ' || c == '\n' || c == '\t' || c == EOF)
    {
      if (wordLength > 0 && wordLength < MAXWORDLENGTH)
      {
        wordLengthArr[wordLength]++;
      }
      if (c == EOF)
      {
        break;
      }
      wordLength = 0;
    }
    else
    {
      ++wordLength;
    }
  }
  for (i = 0; i < MAXWORDLENGTH; i++)
  {
    if (wordLengthArr[i] > 0)
    {
      printf("%3d: ", i);
      for (y = 0; y < wordLengthArr[i]; y++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}
