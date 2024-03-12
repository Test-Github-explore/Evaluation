#include <stdlib.h> // for size_t and malloc
#include <string.h> // for strlen and strcpy

void f(char *input_string) {
  size_t size = strlen(input_string) + 1;
  char *str = (char *)malloc(size);
  strcpy(str, input_string);
  /* ... */
}

int main(void) {
  char *input_string = "Hello, world!";
  f(input_string);
  return 0;
}