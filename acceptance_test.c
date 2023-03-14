#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[20];
  fgets(str, 20, stdin);
  printf("%s", str);
  int j = atoi(str + 15);
  if (j == 100) {
    printf("passed\n");
  }
  else {
    printf("failed\n");
  }
  return 0;
}
