// MEM30-C: Noncompliant Code Example
#include <stdlib.h>
  
void f(char *c_str1, size_t size) {
  char *c_str2 = (char *)realloc(c_str1, size);
  if (c_str2 == NULL) {
    free(c_str1);
  }
}

int main(void) {
  char *c_str = (char *)malloc(10);
  if (c_str == NULL) {
    /* Handle error */
  }
  f(c_str, 20);
  return 0;
}