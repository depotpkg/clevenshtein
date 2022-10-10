#include "levenshtein.h"

#include <stdio.h>

int main(int argc, char* argv[]) {
  if (argc < 3) {
    printf("2 arguments required, but only got %d\n", argc - 1);
    return 1;
  }
  const char* string1 = argv[1];
  const char* string2 = argv[2];
  int distance = levenshtein(string1, string2, 0, 2, 1, 3);
  printf("levenshtein distance: %d\n", distance);
  return 0;
}
