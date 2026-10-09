#include <stdio.h>

FILE *fptr;

int main(int argc, char *argv[]) {
  char buffer[2048];
  int end;

  fptr = fopen(argv[1], "rb");
  fgets(buffer, 2048, fptr);
  printf("%s", buffer);

  while ((end = fgetc(fptr)) != EOF) {
    putchar(end);
  }

  if (argc < 0) {
    return 1;
  }

  fclose(fptr);
  return 0;
}
