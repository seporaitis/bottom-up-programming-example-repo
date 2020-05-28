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
  printf("%d\n", height);
  return 0;
}
