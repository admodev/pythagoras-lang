#include <stdio.h>
#include <stdlib.h>

void read_words (FILE *f) {
  char x[1024];
  while (fscanf(f, " %1023s", x) == 1) {
    puts(x);
  }
}

int main(int argc, char *argv[])
{
  FILE *fp = fopen(argv[1], "r");

  if (fp == NULL)
  {
    printf("Could not open file %s\n", argv[1]);

    exit(1);
  }

  read_words(fp);
  fclose(fp);
}

