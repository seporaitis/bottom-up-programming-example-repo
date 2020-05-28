#include <stdio.h>

int get_int(const char* text) {
  int num = -1;
  do {
    printf("%s", text);
    scanf("%d", &num);
  } while (num < 0 || num > 24);
  return num;
}

int main(void) {
  int height = get_int("Height: ");
  for (int line = 0; line < height; line++) {
    for (int ii = height - line; ii > 0; ii--) {
      printf(" ");
    }
    for (int ii = 0; ii <= line; ii++) {
      printf("#");
    }

    printf("  ");

    for (int ii = 0; ii <= line; ii++) {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
